#include <cmath>
#include "thermocouple.h"

double Thermocouple::calculate(const double *arr, int len, double value, double start) {
    double res = start;
    for (int i = 0; i < len; ++i)
        res += arr[i] * pow(value, i);
    return res;
}

double Thermocouple::calculate(double *arr, int len, double value) {
    return calculate(arr, len, value, 0);
}
