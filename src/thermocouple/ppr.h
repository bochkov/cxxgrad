#ifndef _ppr_h_
#define _ppr_h_

#include "thermocouple.h"

class PPR : public Thermocouple {
public:
    double temp(double) override;

    double value(double) override;

    const char *name() override;

    const char *description() override;
};

#endif
