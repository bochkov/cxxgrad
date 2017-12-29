#ifndef _thermocouple_h_
#define _thermocouple_h_

#include "../graduation.h"

class Thermocouple : public Graduation {
protected:
  double calculate(double*, int, double, double);
  double calculate(double*, int, double);
public:
  virtual ~Thermocouple() {}
  virtual double temp(double) = 0;
  virtual double value(double) = 0;
  virtual const char* name() = 0;
  virtual const char* description() = 0;
};

#endif
