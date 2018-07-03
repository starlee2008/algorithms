//
// Created by starlee on 2018/7/3.
//
#include <cstdio>
#include <cstring>
#include <vector>
#include <fstream>
using namespace std;
const int N=1111;
vector<int> G[N];
bool visit[N];
int currentPoint;
void dfs(int v){
    if(v==currentPoint)
        return;
    visit[v]=true;
    for(int i=0;i<G[v].size();i++){
        if(visit[G[v][i]]== false){
            dfs(G[v][i]);
        }
    }
}
int n,m,k;
int main(){
    ifstream cin("../resources/A1013.txt");
    cin>>n>>m>>k;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    for(int query=0;query<k;query++){
        cin>>currentPoint;
        memset(visit,false,sizeof(visit));
        int block=0;
        for(int i=1;i<=n;i++){
            if(i!=currentPoint&&visit[i]== false){
                dfs(i);
                block++;
            }
        }
        printf("%d\n",block-1);
    }
}
