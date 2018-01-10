#include <cmath>
#include "thermometr.h"

double Thermometr::temp(double ohm) {
    value(ohm); // check illegal argument
    double begin = lower();
    double end = higher();
    double middle;
    do {
        middle = (begin + end) / 2;
        if (value(middle) > ohm)
            end = middle;
        else
            begin = middle;
    } while (fabs(value(middle) - ohm) > EPS);
    return middle;
}

const char *Thermometr::ed() {
    return "Ом";
}
