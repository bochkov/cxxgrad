#ifndef _tsn_h_
#define _tsn_h_

#include "thermometr.h"

class TSN : public Thermometr {
private:
    double R;

    double lower() override;

    double higher() override;

public:
    explicit TSN(double);

    double value(double) override;

    const char *name() override;

    const char *description() override;
};

#endif
