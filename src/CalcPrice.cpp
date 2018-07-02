//
// Created by starlee on 2018/7/2.
//
/*
#include <fstream>
#include <cstdio>
#include <queue>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

const int maxn=1000;
vector<int> child[maxn];
int maxDepth=0,num=0;
double p,r;

void DFS(int index,int depth){
    if(child[index].size()==0){
        if(depth>maxDepth){
            maxDepth=depth;
            num=1;
        }else if(depth==maxDepth){
            num++;
        }
    }
    for(int i=0;i<child[index].size();i++){
        DFS(child[index][i],depth+1);
    }
    return;

}
int main() {
    ifstream cin("../resources/A1090.txt");
    int n;
    int father,root;
    cin>>n>>p>>r;
    r/=100;
    for(int i=0;i<n;i++){
        cin>>father;
        if(father!=-1){
            child[father].push_back(i);
        }else{
            root=i;
        }
    }
    DFS(root,0);
    printf("%0.2f %d\n",p*pow(1+r,maxDepth),num);

}
 */