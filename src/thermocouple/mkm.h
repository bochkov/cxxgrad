#ifndef _mkm_h_
#define _mkm_h_

#include "thermocouple.h"

class MKM : public Thermocouple {
private:
    double calculate0(double);

public:
    double temp(double) override;

    double value(double) override;

    const char *name() override;

    const char *description() override;
};

#endif
