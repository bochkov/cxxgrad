#include "jkj.h"

double JKJ::temp(double v) {
    if (v >= -8.095 && v < 0) {
        double C[9] = {0, 1.9528268e1, -1.2286185, -1.0752178,
                       -5.9086933e-1, -1.7256713e-1, -2.8131513e-2,
                       -2.3963370e-3, -8.3823321e-5};
        return calculate(C, 9, v);
    } else if (v >= 0 && v < 42.919) {
        double C[8] = {0, 1.978425e1, -2.001204e-1, 1.036969e-2,
                       -2.549687e-4, 3.585153e-6, -5.344285e-8,
                       5.099890e-10};
        return calculate(C, 8, v);
    } else if (v >= 42.919 && v <= 69.553) {
        double C[6] = {-3.11358187e3, 3.00543684e2, -9.94773230,
                       1.70276630e-1, -1.43033468e-3, 4.73886084e-6};
        return calculate(C, 6, v);
    } else
        throw "value is out of bounds [-8.095..69.553]";
}

double JKJ::value(double temp) {
    if (temp >= -210 && temp < 760) {
        double A[9] = {0, 5.0381187815e-2, 3.0475836930e-5, -8.5681065720e-8,
                       1.3228195295e-10, -1.7052958337e-13, 2.0948090697e-16,
                       -1.2538395336e-19, 1.5631725697e-23};
        return calculate(A, 9, temp);
    } else if (temp >= 760 && temp <= 1200) {
        double A[6] = {2.9645625681e2, -1.4976127786, 3.1787103924e-3,
                       -3.1847686701e-6, 1.5720819004e-9, -3.0691369056e-13};
        return calculate(A, 6, temp);
    } else
        throw "temp is out of bounds [-210..1200]";
}

const char *JKJ::name() {
    return "ТЖК(J)";
}

const char *JKJ::description() {
    return "Номинальная статическая характеристика преобразования "
            "термопары типа ТЖК(J) { железо-медь/никель (железо/константан) }";
}
