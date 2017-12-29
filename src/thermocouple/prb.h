#ifndef _prb_h_
#define _prb_h_

#include "thermocouple.h"

class PRB : public Thermocouple {
public:
    double temp(double) override;

    double value(double) override;

    const char *name() override;

    const char *description() override;
};

#endif
