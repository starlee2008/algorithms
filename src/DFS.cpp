//
// Created by starlee on 2018/6/22.
//
/*
#include <cstdio>
#include <fstream>
#include <iostream>

#include <iostream>
using namespace std;

const int maxn=30;
int n,V,maxValue=0;//背包容量
int w[maxn],c[maxn];



void DFS(int index, int sumW, int sumC){
    cout<<index<<" "<<sumW<<" "<<sumC<<" "<<endl;
    if(index==n){
        if(sumW<=V&&sumC>maxValue){
            maxValue=sumC;
        }
        return;
    }

    DFS(index+1,sumW,sumC);

    DFS(index+1,sumW+w[index],sumC+c[index]);



}
int main(){
    ifstream cin("../resources/dfs.txt");
    cin>>n>>V;
    for(int i=0;i<n;i++){
        cin>>w[i];//背包重量
    }
    for(int i=0;i<n;i++){
        cin>>c[i];//背包价值
    }
    DFS(0,0,0);
    cout<<maxValue;

}
 */