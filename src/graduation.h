#ifndef _graduation_h_
#define _graduation_h_

class Graduation {
public:
  virtual ~Graduation() {}
  virtual double temp(double) = 0;
  virtual double value(double) = 0;
  virtual const char* name() = 0;
  virtual const char* description() = 0;
};

#endif
