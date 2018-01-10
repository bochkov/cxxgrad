#ifndef _thermometr_h_
#define _thermometr_h_

#include "../graduation.h"

class Thermometr : public Graduation {
private:
    static double constexpr EPS = 0.001;
protected:
    virtual double lower() = 0;

    virtual double higher() = 0;

public:
    ~Thermometr() override = default;

    double temp(double) override;

    double value(double) override = 0;

    const char *name() override = 0;

    const char *description() override = 0;

    const char *ed() override;
};

#endif
