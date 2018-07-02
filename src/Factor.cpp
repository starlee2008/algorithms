//
// Created by starlee on 2018/6/30.
//

#include <cmath>

using namespace std;
struct factor{
    int x;
    int count;
};
int const maxn=1000;

bool is_prime(int n){
    if(n==1)
        return false;
    int sqr=(int)sqrt(1.0*n);
    for(int i=2;i<=sqr;i++){
        if(n%i==0)
            return false;
    }
    return true;
}
int prime[maxn],pNum=0;
void find_prime(){
    for(int i=1;i<maxn;i++ ){
        if(is_prime(i)){
            prime[pNum++]=i;
        }
    }
}
/*
int main(){
    factor fac[10];
    ifstream cin("../resources/fac.txt");
    find_prime();
    int n,num=0;
    cin>>n;
    if(n==1)
        printf("1=1");
    else{
        printf("%d=",n);
        int sqr=(int)sqrt(1.0*n);
        for(int i=0;i<pNum&&prime[i]<=sqr;i++){
            if(n%prime[i]==0){
                fac[num].x=prime[i];
                fac[num].count=0;
                while(n%prime[i]==0){
                    fac[num].count++;
                    n/=prime[i];
                }
                num++;
            }
            if(n==1) break;

        }
        if(n!=1){
            fac[num].x=n;
            fac[num++].count=1;

        }
        for(int i=0;i<num;i++){
            if(i>0) printf("*");
            printf("%d",fac[i].x);
            if(fac[i].count>1){
                printf("^%d",fac[i].count);
            }
        }
    }
}
 */