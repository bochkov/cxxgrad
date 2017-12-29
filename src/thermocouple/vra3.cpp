#include "vra3.h"

double VRA3::temp(double v) {
    if (v >= 0 && v <= 26.773) {
        double C[9] = {0.8769216, 8.1483231e1, -5.9344173,
                       0.8699340, -7.6797687e-2, 4.1814387e-3,
                       -1.3439670e-4, 2.342409e-6, -1.6988727e-8};
        return calculate(C, 9, v);
    } else
        throw "value is out of bounds [0..26.773]";
}

double VRA3::value(double temp) {
    if (temp >= 0 && temp <= 1800) {
        double A[9] = {-1.0649133e-4, 1.1686475e-2, 1.8022157e-5,
                       -3.3436998e-8, 3.7081688e-11, -2.5748444e-14,
                       1.0301893e-17, -2.0735944e-21, 1.4678450e-25};
        return calculate(A, 9, temp);
    } else
        throw "temp is out of bounds [0..1800]";
}

const char *VRA3::name() {
    return "ТВР(A-3)";
}

const char *VRA3::description() {
    return "Номинальная статическая характеристика "
            "преобразования термопары типа ТВР(A-3) "
            "{ вольфрам-рений/вольфрам-рений }";
}
