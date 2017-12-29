#ifndef _ppr_h_
#define _ppr_h_

#include "thermocouple.h"

class PPR : public Thermocouple {
public:
  double temp(double);
  double value(double);
  const char* name();
  const char* description();
};

#endif
