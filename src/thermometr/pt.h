#ifndef _pt_h_
#define _pt_h_

#include "thermometr.h"

class Pt : public Thermometr {
private:
    double R;

    double lower() override;

    double higher() override;

public:
    explicit Pt(double);

    double value(double) override;

    const char *name() override;

    const char *description() override;
};

#endif
