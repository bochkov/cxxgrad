#ifndef _xak_h_
#define _xak_h_

#include "thermocouple.h"

class XAK : public Thermocouple {
public:
    double temp(double) override;

    double value(double) override;

    const char *name() override;

    const char *description() override;
};

#endif
