#ifndef _xkne_h_
#define _xkne_h_

#include "thermocouple.h"

class XKnE : public Thermocouple {
public:
    double temp(double) override;

    double value(double) override;

    const char *name() override;

    const char *description() override;
};

#endif
