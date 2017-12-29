#ifndef _tsp_h_
#define _tsp_h_

#include "thermometr.h"

class TSP : public Thermometr {
private:
    double R;

    double lower() override;

    double higher() override;

public:
    explicit TSP(double);

    double value(double) override;

    const char *name() override;

    const char *description() override;
};

#endif
