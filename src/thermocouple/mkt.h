#ifndef _mkt_h_
#define _mkt_h_

#include "thermocouple.h"

class MKT : public Thermocouple {
public:
    double temp(double) override;

    double value(double) override;

    const char *name() override;

    const char *description() override;
};

#endif
