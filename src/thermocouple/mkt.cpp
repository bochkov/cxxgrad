#include "mkt.h"

double MKT::temp(double v) {
  if (v >= -5.603 && v < 0) {
      double C[8] = {0, 2.5949192e1, -2.1316967e-1, 7.9018692e-1,
              4.2527777e-1, 1.3304473e-1, 2.0241446e-2, 1.2668171e-3};
      return calculate(C, 8, v);
  }
  else if (v >= 0 && v <= 20.872) {
      double C[7] = {0, 2.592800e1, -7.602961e-1, 4.637791e-2,
              -2.165394e-3, 6.048144e-5, -7.293422e-7};
      return calculate(C, 7, v);
  }
  else
      throw "value is out of bounds [-5.603..20.872]";
}

double MKT::value(double temp) {
  if (temp >= -270 && temp < 0) {
      double A[15] = {0, 3.8748106364e-2, 4.4194434347e-5, 1.1844323105e-7,
              2.0032973554e-8, 9.0138019559e-10, 2.2651156593e-11,
              3.6071154205e-13, 3.8493939883e-15, 2.8213521925e-17,
              1.4251594779e-19, 4.8768662286e-22, 1.0795539270e-24,
              1.3945027062e-27, 7.9795153927e-31};
      return calculate(A, 15, temp);
  }
  else if (temp >= 0 && temp <= 400) {
      double A[9] = {0, 3.8748106364e-2, 3.3292227880e-5, 2.0618243404e-7,
              -2.1882256846e-9, 1.0996880928e-11, -3.0815758772e-14,
              4.5479135290e-17, -2.7512901673e-20};
      return calculate(A, 9, temp);
  }
  else
      throw "temp is out of bounds [-270..400]";
}

const char* MKT::name() {
  return "ТМК(T)";
}

const char* MKT::description() {
  return "Номинальная статическая характеристика "
    "преобразования термопары типа ТМК(T) "
    "{ медь/медь-никель (медь/константан) }";
}
