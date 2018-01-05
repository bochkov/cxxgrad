#include <string>
#include "pt.h"

Pt::Pt(double r) {
    this->R = r;
}

double Pt::lower() {
    return -200.0;
}

double Pt::higher() {
    return 850.0;
}

double Pt::value(double temp) {
    if (temp >= -200 && temp <= 850) {
        double A = 3.9083e-3;
        double B = -5.775e-7;
        double C = -4.183e-12;
        double Wt = 1 + A * temp + B * temp * temp;
        if (temp < 0)
            Wt += C * (temp - 100) * temp * temp * temp;
        return R * Wt;
    } else
        throw "temp is out of bounds [-200..850]";
}

const char *Pt::name() {
    std::string str = "Pt" + std::to_string((int) R);
    auto *cstr = new char[str.length() + 1];
    strcpy(cstr, str.c_str());
    return cstr;
}

const char *Pt::description() {
    return "Pt-thermometr (a=0.00385)";
}
