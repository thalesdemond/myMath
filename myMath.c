#include "myMath.h"

double evalPoly(double x, double * poly, unsigned int s){
    double res = poly[0];
    for(unsigned int i = 1; i < s; i++){
        res *= x;
        res += poly[i];
    }
    return (res);
}
