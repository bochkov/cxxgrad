#include <cmath>
#include "mkm.h"

double MKM::calculate0(double v) {
    double EPS = 0.001;
    double begin = -200;
    double vBegin = value(begin);
    double end = 100;
    double vEnd = value(end);
    if (v < vBegin || v > vEnd) {
        throw "temp is out of bounds";
    }
    double middle;
    for (;;) {
        middle = (begin + end) / 2;
        double val = value(middle);
        if (v > val) {
            begin = middle;
        } else {
            end = middle;
        }
        if (fabs(v-val) < EPS) {
            break;
        }
    }
    return middle;
}

double MKM::temp(double v) {
    if (v >= -6.154 && v <= 4.722)
        //double C[] = { 0.4548090, 2.2657698e-2, -7.7935652e-7, 1.1786931e-10};
        return calculate0(v);
    else
        throw "value is out of bounds [-6.154..4.722]";
}

double MKM::value(double temp) {
    if (temp >= -200 && temp <= 100) {
        double A[4] = {2.4455560e-6, 4.2638917e-2, 5.0348392e-5, -4.4974485e-8};
        return calculate(A, 4, temp);
    } else
        throw "temp is out of bounds [-200..100]";
}

const char *MKM::name() {
    return "ТМК(M)";
}

const char *MKM::description() {
    return "Номинальная статическая характеристика "
            "преобразования термопары типа ТМК(M) { медь/копель }";
}
