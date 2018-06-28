//
// Created by starlee on 2018/5/3.
//

#ifndef ALGO_TEST_H
#define ALGO_TEST_H
#include <string>
#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cstdio>
#include <deque>
#include <sstream>
#include <fstream>
#include <cmath>
#include <set>
#include "Poly.h"

using namespace std;


class Test {
public:
    void firstRun() ;
    int add(int a,int b);
    void testVector();
    void testVector1();
    void testString();
    void stringNum(string strNum);
    string convert2String(double x);
    double convertFromString(const string& str);
    void testDqueue();
    void testAcm1167();
    void testAcm1166();
    void testAcm1174();
    void testAcm1176();
    void testAcm1177();
    void testAcm1178();
    void testAcm1179();
    void testAcm1181();
    void testAcm1185();
    int gcd(int x,int y);
    bool isPrime(int n);
    void testAcm1190();
    void testAcm1191();
    void testAcm1204();
    void testAcm1208();
    void testAcm1309();

};


#endif //ALGO_TEST_H
