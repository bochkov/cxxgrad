#include "vra1.h"

double VRA1::temp(double v) {
    if (v >= 0 && v <= 33.640) {
        double C[9] = {0.9643027, 7.9495086e1, -4.9990310,
                       0.6341776, -4.7440967e-2, 2.1811337e-3,
                       -5.8324228e-5, 8.2433725e-7, -4.5928480e-9};
        return calculate(C, 9, v);
    } else
        throw "value is out of bounds [0..33.640]";
}

double VRA1::value(double temp) {
    if (temp >= 0 && temp <= 2500) {
        double A[9] = {7.1564735e-4, 1.1951905e-2, 1.6672625e-5,
                       -2.8287807e-8, 2.8397839e-11, -1.8505007e-14,
                       7.3632123e-18, -1.6148878e-21, 1.4901679e-25};
        return calculate(A, 9, temp);
    } else
        throw "temp is out of bounds [0..2500]";
}

const char *VRA1::name() {
    return "ТВР(A-1)";
}

const char *VRA1::description() {
    return "Номинальная статическая характеристика "
            "преобразования термопары типа ТВР(A-1) "
            "{ вольфрам-рений/вольфрам-рений }";
}