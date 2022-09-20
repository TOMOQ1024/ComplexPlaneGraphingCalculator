#include "Complex.hpp"


double cRe(Complex c) { return c.re; }
double cIm(Complex c) { return c.im; }
double cAbs(Complex c) { return sqrt(c.re * c.re + c.im * c.im); }
double cArg(Complex c) { return atan2(c.im, c.re); }
