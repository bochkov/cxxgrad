#ifndef _vra3_h_
#define _vra3_h_

#include "thermocouple.h"

class VRA3 : public Thermocouple {
public:
    double temp(double) override;

    double value(double) override;

    const char *name() override;

    const char *description() override;
};

#endif
