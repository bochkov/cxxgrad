#ifndef _vra2_h_
#define _vra2_h_

#include "thermocouple.h"

class VRA2 : public Thermocouple {
public:
    double temp(double) override;

    double value(double) override;

    const char *name() override;

    const char *description() override;
};

#endif
