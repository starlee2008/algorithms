//
// Created by starlee on 2018/5/30.
//

#ifndef ALGO_POLY_H
#define ALGO_POLY_H

#endif //ALGO_POLY_H

#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

struct Poly{
    int exp;
    double cof;
};
struct Stu{
    long long id;
    int examSeat;
};
struct Stu1{
    char name[15];
    char id[15];
    int score;
};
struct Person{
    char name[10];
    int yy,mm,dd;

};
struct pNode{
    char name[20];
    int hh,mm,ss;
};
struct PScore{
    char name[20];
    char id[15];
    int score;
};
struct Comp{
    bool operator()(const string &s1, const string &s2) {
        if(s1.length()!=s2.length())
            return s1.length()<s2.length();
        int c1=count(s1.begin(),s1.end(),'1');
        int c2=count(s2.begin(),s2.end(),'1');
        return (c1!=c2)?c1<c2:s1<s2;
    }
};

struct Mooncake{
    double store;
    double sell;
    double price;

};

struct SNode{
    char data;
    int next;
    bool flag;

};
struct SSNode{
    int address,data,next;
    bool flag;
};
struct Mouse{
    int weight;
    int R;
};
struct ANode{
    int address,data,next;
    int order;
};
struct BNode{
    int data;
    BNode *lchild;
    BNode *rchild;
};