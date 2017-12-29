//#include <cstring>
#include <string>
#include "tsn.h"

TSN::TSN(double r) {
    this->R = r;
}

double TSN::lower() {
    return -60;
}

double TSN::higher() {
    return 180;
}

double TSN::value(double temp) {
    if (temp >= -60 && temp <= 180) {
        double A = 5.4963e-3;
        double B = 6.7556e-6;
        double C = 9.2004e-9;
        double Wt = 1 + A * temp + B * temp * temp;
        if (temp > 100)
            Wt += C * (temp - 100) * temp * temp;
        return R * Wt;
    } else
        throw "temp is out of bounds [-60..180]";
}

const char *TSN::name() {
    std::string str = std::to_string((int) R) + "Н";
    auto *cstr = new char[str.length() + 1];
    std::strcpy(cstr, str.c_str());
    return cstr;
}

const char *TSN::description() {
    return "N-thermometr";
}
