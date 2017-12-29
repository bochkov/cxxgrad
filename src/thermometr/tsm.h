#ifndef _tsm_h_
#define _tsm_h_

#include "thermometr.h"

class TSM : public Thermometr {
private:
    double R;

    double lower() override;

    double higher() override;

public:
    explicit TSM(double);

    double value(double) override;

    const char *name() override;

    const char *description() override;
};

#endif
