//
// Created by starlee on 2018/7/3.
//
/*
#include <cstring>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;
const int N=1000;
vector<int> G[N];
bool isRoot[N];
int father[N];
int findFather(int x){
    int a=x;
    while(x!=father[x]){
        x=father[x];
    }
    return x;
}
void Union(int a,int b){
    int faA=findFather(a);
    int faB=findFather(b);
    if(faA!=faB){
        father[faA]=faB;
    }
}
void init(int n){
    for(int i=1;i<=n;i++){
        father[i]=i;
    }
}
int calcBlock(int n){
    int block=0;
    for(int i=1;i<=n;i++){
        isRoot[findFather(i)]=true;
    }
    for(int i=1;i<=n;i++){
        block+=isRoot[i];
    }
    return block;
}
int maxH=0;
vector<int> temp,Ans;
void DFS(int u,int height,int pre){
    if(height>maxH){
        temp.clear();
        temp.push_back(u);
        maxH=height;
    }else if(height==maxH){
        temp.push_back(u);
    }
    for(int i=0;i<G[u].size();i++){
        if(G[u][i]==pre) continue;
        DFS(G[u][i],height+1,u);
    }

}
int main(){
    ifstream cin("../resources/A1021.txt");
    int a,b,n;
    cin>>n;
    init(n);
    for(int i=1;i<n;i++){
        cin>>a>>b;
        G[a].push_back(b);
        G[b].push_back(a);
        Union(a,b);
    }
    int block=calcBlock(n);
    if(block!=1){
        printf("Error:%d components\n",block);
    }else{
        DFS(1,1,-1);
        Ans=temp;
        DFS(Ans[0],1,-1);
        for(int i=0;i<temp.size();i++){
            Ans.push_back(temp[i]);
        }
        sort(Ans.begin(),Ans.end());
        printf("%d\n",Ans[0]);
        for(int i=1;i<Ans.size();i++){
            if(Ans[i]!=Ans[i-1]){
                printf("%d\n",Ans[i]);
            }
        }
    }
}
 */