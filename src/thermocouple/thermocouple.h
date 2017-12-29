#ifndef _thermocouple_h_
#define _thermocouple_h_

#include "../graduation.h"

class Thermocouple : public Graduation {
protected:
    double calculate(const double *, int, double, double);

    double calculate(double *, int, double);

public:
    ~Thermocouple() override = default;

    double temp(double) override = 0;

    double value(double) override = 0;

    const char *name() override = 0;

    const char *description() override = 0;
};

#endif
