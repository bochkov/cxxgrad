#ifndef _pps_h_
#define _pps_h_

#include "thermocouple.h"

class PPS : public Thermocouple {
public:
    double temp(double) override;

    double value(double) override;

    const char *name() override;

    const char *description() override;
};

#endif
