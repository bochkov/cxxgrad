#include <cmath>
#include "thermometr.h"

double Thermometr::temp(double ohm) {
    double begin = lower();
    double vBegin = value(begin);
    double end = higher();
    double vEnd = value(end);
    if (ohm < vBegin || ohm > vEnd) {
        throw "temp is out of bounds";
    }
    double middle;
    for (;;) {
        middle = (begin + end) / 2;
        double val = value(middle);
        if (val > ohm) {
            end = middle;
        } else {
            begin = middle;
        }
        if (fabs(val-ohm) < EPS) {
            break;
        }
    }
    return middle;
}

const char *Thermometr::ed() {
    return "Ом";
}
