#ifndef _nnn_h_
#define _nnn_h_

#include "thermocouple.h"

class NNN : public Thermocouple {
public:
    double temp(double) override;

    double value(double) override;

    const char *name() override;

    const char *description() override;
};

#endif
