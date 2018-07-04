//
// Created by starlee on 2018/7/4.
//
/*
#include<algorithm>
#include <fstream>
using namespace std;
struct node{
    int v,height;
    node *lchild,*rchild;
} *root;
node *newNode(int v){
    node *Node=new node;
    Node->v=v;
    Node->height=1;
    Node->lchild=Node->rchild=NULL;
    return Node;
}
int getHeight(node* root){
    if(root==NULL)
        return 0;
    return root->height;
}
void updateHeight(node* root){
    root->height=max(getHeight(root->lchild),getHeight(root->rchild))+1;
}
int getBalanceFactor(node *root){
    return getHeight(root->lchild)-getHeight(root->rchild);
}
void L(node* &root){
    node* temp=root->rchild;
    root->rchild=temp->lchild;
    temp->lchild=root;
    updateHeight(root);
    updateHeight(temp);
    root=temp;
}
void R(node* &root){
    node* temp=root->lchild;
    root->lchild=temp->rchild;
    root->rchild=root;
    updateHeight(root);
    updateHeight(temp);
    root=temp;
}
void insert(node* &root,int v){
    if(root==NULL){
        root=newNode(v);
        return;
    }
    if(v<root->v){
        insert(root->lchild,v);
        updateHeight(root);
        if(getBalanceFactor(root)==2){
            if(getBalanceFactor(root->lchild)==1){
                R(root);
            }else if(getBalanceFactor(root->lchild)==-1){
                L(root->lchild);
                R(root);
            }

        }
    }else{
        insert(root->rchild,v);
        updateHeight(root);
        if(getBalanceFactor(root)==-2){
            if(getBalanceFactor(root->rchild)==-1){
                L(root);
            }else if(getBalanceFactor(root->rchild)==1){
                R(root->rchild);
                L(root);
            }
        }
    }
}
node* create(int data[],int n){
    node* root=NULL;
    for(int i=0;i<n;i++){
        insert(root,data[i]);
    }
    return root;
}
int main(){
    ifstream cin("../resources/avl.txt");
    int n,v;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>v;
        insert(root,v);
    }
    printf("%d\n",root->v);
}
 */