#ifndef _jkj_h_
#define _jkj_h_

#include "thermocouple.h"

class JKJ : public Thermocouple {
public:
  double temp(double);
  double value(double);
  const char* name();
  const char* description();
};

#endif
