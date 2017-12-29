#ifndef _mkm_h_
#define _mkm_h_

#include "thermocouple.h"

class MKM : public Thermocouple {
private:
  double calculate0(double);
public:
  double temp(double);
  double value(double);
  const char* name();
  const char* description();
};

#endif
