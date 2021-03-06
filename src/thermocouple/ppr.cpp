#include "ppr.h"

double PPR::temp(double v) {
    if (v >= -0.226 && v < 1.923) {
        double C[11] = {0, 1.8891380e2, -9.3835290e1, 1.3068619e2,
                        -2.2703580e2, 3.5145659e2, -3.8953900e2,
                        2.8239471e2, -1.2607281e2, 3.1353611e1, -3.3187769};
        return calculate(C, 11, v);
    } else if (v >= 1.923 && v < 11.361) {
        double C[10] = {1.334584505e1, 1.472644573e2, -1.844024844e1,
                        4.031129726, -6.249428360e-1, 6.468412049e-2,
                        -4.458750426e-3, 1.994710149e-4, -5.313401790e-6, 6.481976217e-8};
        return calculate(C, 10, v);
    } else if (v >= 11.361 && v < 19.739) {
        double C[6] = {-8.199599416e1, 1.553962042e2, -8.342197663,
                       4.279433549e-1, -1.191577910e-2, 1.492290091e-4};
        return calculate(C, 6, v);
    } else if (v >= 19.739 && v <= 21.103) {
        double C[5] = {3.406177836e4, -7.023729171e3, 5.582903813e2,
                       -1.952394635e1, 2.560740231e-1};
        return calculate(C, 5, v);
    } else
        throw "value is out of bounds [-0.226..1.923]";
}

double PPR::value(double temp) {
    if (temp >= -50 && temp < 1064.18) {
        double A[10] = {0, 5.28961729765e-3, 1.39166589782e-5, -2.3885693017e-8,
                        3.56916001063e-11, -4.62347666298e-14, 5.00777441034e-17,
                        -3.73105886191e-20, 1.57716482367e-23, -2.81038625251e-27};
        return calculate(A, 10, temp);
    } else if (temp >= 1064.18 && temp < 1664.5) {
        double A[6] = {2.95157925316, -2.52061251332e-3, 1.59564501865e-5,
                       -7.64085947576e-9, 2.05305291024e-12, -2.93359668173e-16};
        return calculate(A, 6, temp);
    } else if (temp >= 1664.5 && temp < 1768.1) {
        double A[5] = {1.52232118209e2, -2.68819888545e-1, 1.71280280471e-4,
                       -3.45895706453e-8, -9.34633971046e-15};
        return calculate(A, 5, temp);
    } else
        throw "temp is out of bounds [-50..1768.1]";
}

const char *PPR::name() {
    return "ТПП(R)";
}

const char *PPR::description() {
    return "Номинальная статическая характеристика "
            "преобразования термопары типа ТПП(R) "
            "{ 13%-платина-родий/платина }";
}
