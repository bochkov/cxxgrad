#ifndef _mkt_h_
#define _mkt_h_

#include "thermocouple.h"

class MKT : public Thermocouple {
public:
  double temp(double);
  double value(double);
  const char* name();
  const char* description();
};

#endif
