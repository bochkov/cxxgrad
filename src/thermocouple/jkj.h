#ifndef _jkj_h_
#define _jkj_h_

#include "thermocouple.h"

class JKJ : public Thermocouple {
public:
    double temp(double) override;

    double value(double) override;

    const char *name() override;

    const char *description() override;
};

#endif
