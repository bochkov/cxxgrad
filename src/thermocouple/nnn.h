#ifndef _nnn_h_
#define _nnn_h_

#include "thermocouple.h"

class NNN : public Thermocouple {
public:
  double temp(double);
  double value(double);
  const char* name();
  const char* description();
};

#endif
