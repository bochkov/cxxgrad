#include "vra2.h"

double VRA2::temp(double v) {
    if (v >= 0 && v <= 27.232) {
        double C[9] = {1.1196428, 8.0569397e1, -6.2279122,
                       0.9337015, -8.2608051e-2, 4.4110979e-3,
                       -1.3610551e-4, 2.2183851e-6, -1.4527698e-8};
        return calculate(C, 9, v);
    } else
        throw "value is out of bounds [0..27.232]";
}

double VRA2::value(double temp) {
    if (temp >= 0 && temp <= 1800) {
        double A[9] = {-1.0850558e-4, 1.1642292e-2, 2.1280289e-5,
                       -4.4258402e-8, 5.5652058e-11, -4.3801310e-14,
                       2.0228390e-17, -4.9354041e-21, 4.8119846e-25};
        return calculate(A, 9, temp);
    } else
        throw "temp is out of bounds [0..1800]";
}

const char *VRA2::name() {
    return "ТВР(A-2)";
}

const char *VRA2::description() {
    return "Номинальная статическая характеристика "
            "преобразования термопары типа ТВР(A-2) "
            "{ вольфрам-рений/вольфрам-рений }";
}
