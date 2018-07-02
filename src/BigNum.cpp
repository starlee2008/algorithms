//
// Created by starlee on 2018/7/2.
//
#include <stdio.h>
#include <string.h>
#include <fstream>
using namespace std;
struct bignum{
    int d[1000];
    int len;
    bignum(){
        memset(d,0,sizeof(d));
        len=0;
    }
};
bignum change(char str[]){
    bignum a;
    a.len=strlen(str);
    for(int i=0;i<a.len;i++){
        a.d[i]=str[a.len-i-1]-'0';
    }
    return a;
}
bignum add(bignum a,bignum b){
    bignum c;
    int carry=0;
    for(int i=0;i<a.len||i<b.len;i++){
        int temp=a.d[i]+b.d[i]+carry;
        c.d[c.len++]=temp%10;
        carry=temp/10;
    }
    if(carry!=0){
        c.d[c.len++]=carry;
    }
    return c;

}
bignum sub(bignum a,bignum b){
    bignum c;
    for(int i=0;i<a.len||i<b.len;i++){
        if(a.d[i]<b.d[i]){
            a.d[i+1]--;
            a.d[i]+=10;
        }
        c.d[c.len++]=a.d[i]-b.d[i];
        while (c.len-1>=1&&c.d[c.len-1]==0){
            c.len--;
        }

    }
    return c;
}
void print(bignum a){
    for(int i=a.len-1;i>=0;i--){
        printf("%d",a.d[i]);
    }
}
/*
int main(){

    char str1[1000],str2[1000];
    ifstream cin("../resources/bignum.txt");
    cin>>str1>>str2;
    bignum a=change(str1);
    bignum b=change(str2);
    print(sub(a,b));
    printf("\n");
    print(add(a,b));

}
 */