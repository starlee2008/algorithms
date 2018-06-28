//
// Created by starlee on 2018/6/27.
//

#ifndef ALGO_FRACTION_H
#define ALGO_FRACTION_H
#include <cstdlib>
#include <fstream>
#include <algorithm>
using namespace std;

class Fraction {


public:
    long up,down;
    Fraction reduction(Fraction result);
    int gcd(long a,long b);
    Fraction add(Fraction f1,Fraction f2);
    void ShowResult(Fraction r);

};


#endif //ALGO_FRACTION_H
