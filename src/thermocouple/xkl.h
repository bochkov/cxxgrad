#ifndef _xkl_h_
#define _xkl_h_

#include "thermocouple.h"

class XKL : public Thermocouple {
public:
    double temp(double) override;

    double value(double) override;

    const char *name() override;

    const char *description() override;
};

#endif
