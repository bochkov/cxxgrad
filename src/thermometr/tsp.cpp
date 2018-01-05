#include <string>
#include "tsp.h"

TSP::TSP(double r) {
    this->R = r;
}

double TSP::lower() {
    return -200;
}

double TSP::higher() {
    return 850;
}

double TSP::value(double temp) {
    if (temp >= -200 && temp <= 850) {
        double A = 3.9690e-3;
        double B = -5.841e-7;
        double C = -4.330e-12;
        double Wt = 1 + A * temp + B * temp * temp;
        if (temp < 0)
            Wt += C * (temp - 100) * temp * temp * temp;
        return R * Wt;
    }
    else
        throw "temp is out of bounds [-200..850]";
}

const char *TSP::name() {
    std::string str = std::to_string((int) R) + "П";
    auto *cstr = new char[str.length() + 1];
    strcpy(cstr, str.c_str());
    return cstr;
}

const char *TSP::description() {
    return "T-thermometr (a=0.00391)";
}
