//
// Created by starlee on 2018/6/27.
//
#include "../header/Fraction.h"
Fraction Fraction::reduction(Fraction result) {
    if(result.down<0){
        result.up=-result.up;
        result.down=-result.down;
    }
    if(result.up==0){
        result.down=1;
    }else{
        int d=gcd(abs(result.up),abs(result.down));
        result.up/=d;
        result.down/=d;
    }
    return result;
}
int Fraction::gcd(long a, long b) {
    return b==0?a:gcd(b,a%b);
}

Fraction Fraction::add(Fraction f1, Fraction f2) {
    Fraction result;
    result.up=f1.up*f2.down+f2.up*f1.down;
    result.down=f1.down*f2.down;
    return reduction(result);

}
void Fraction::ShowResult(Fraction r) {
    reduction(r);
    if(r.down==1) printf("%ld\n",r.up);
    else if(abs(r.up)>r.down){
        printf("%ld %ld/%ld\n",r.up/r.down,abs(r.up)%r.down,r.down);
    }else{
        printf("%ld/%ld",r.up,r.down);
    }
}