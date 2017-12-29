#include <cstring>
#include <string>
#include "tsm.h"

TSM::TSM(double r) {
   this->R = r;
}

double TSM::lower() {
    return -50;
}

double TSM::higher() {
    return 200;
}

double TSM::value(double temp) {
    if (temp >= -50 && temp <= 200) {
        double A = 4.28e-3;
        double B = -6.2032e-7;
        double C = 8.5154e-10;
        double Wt = (1 + A * temp);
        if (temp < 0)
            Wt += B * temp * (temp + 6.7) + C * temp * temp * temp;
        return Wt * R;
    } else
        throw "temp is out of bounds [-50..200]";
}

const char *TSM::name() {
    std::string str = std::to_string((int) R) + "М";
    auto *cstr = new char[str.length() + 1];
    std::strcpy(cstr, str.c_str());
    return cstr;
}

const char *TSM::description() {
    return "M-thermometr";
}
