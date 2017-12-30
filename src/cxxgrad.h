#ifndef _cxxgrad_h_
#define _cxxgrad_h_

#include "graduation.h"
#include "thermocouple/thermocouples.h"
#include "thermometr/thermometers.h"

#ifdef __cplusplus
extern "C"
#endif
{

const char *th_name(Graduation *);
const char *th_description(Graduation *);

TRESULT *th_value(Graduation *, double);
TRESULT *th_temp(Graduation *, double);

bool tres_success(TRESULT *);
double tres_val(TRESULT *);
const char *tres_err(TRESULT *);

Graduation *th_new_jkj();
Graduation *th_new_mkm();
Graduation *th_new_mkt();
Graduation *th_new_nnn();
Graduation *th_new_ppr();
Graduation *th_new_pps();
Graduation *th_new_prb();
Graduation *th_new_vra1();
Graduation *th_new_vra2();
Graduation *th_new_vra3();
Graduation *th_new_xak();
Graduation *th_new_xkl();
Graduation *th_new_xkne();

Graduation *th_new_pt(double);
Graduation *th_new_tsm(double);
Graduation *th_new_tsn(double);
Graduation *th_new_tsp(double);
};

#endif
