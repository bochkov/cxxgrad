#include "graduation.h"
#include "thermocouple/thermocouples.h"
#include "thermometr/thermometers.h"

#ifdef __cplusplus
extern "C"
#endif
{

const char *th_name(Graduation *gr) {
    return gr->name();
}

const char *th_description(Graduation *gr) {
    return gr->description();
}

double th_value(Graduation *gr, double temp) {
    return gr->value(temp);
}

double th_temp(Graduation *gr, double value) {
    return gr->temp(value);
}

void th_delete(Graduation *gr) {
    delete gr;
}

Graduation *th_new_jkj() {
    return new JKJ();
}

Graduation *th_new_mkm() {
    return new MKM();
}

Graduation *th_new_mkt() {
    return new MKT();
}

Graduation *th_new_nnn() {
    return new NNN();
}

Graduation *th_new_ppr() {
    return new PPR();
}

Graduation *th_new_pps() {
    return new PPS();
}

Graduation *th_new_prb() {
    return new PRB();
}

Graduation *th_new_vra1() {
    return new VRA1();
}

Graduation *th_new_vra2() {
    return new VRA2();
}

Graduation *th_new_vra3() {
    return new VRA3();
}

Graduation *th_new_xak() {
    return new XAK();
}

Graduation *th_new_xkl() {
    return new XKL();
}

Graduation *th_new_xkne() {
    return new XKnE();
}

Graduation *th_new_pt(double r) {
    return new Pt(r);
}

Graduation *th_new_tsm(double r) {
    return new TSM(r);
}

Graduation *th_new_tsn(double r) {
    return new TSN(r);
}

Graduation *th_new_tsp(double r) {
    return new TSP(r);
}
};
