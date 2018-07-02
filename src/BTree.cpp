#include <cstdio>
#include <fstream>

using namespace std;
struct node{
    char data;
    node* lchild;
    node* rchild;

};
node* newNode(char v){
    node* Node=new node;
    Node->data=v;
    Node->lchild=Node->rchild=NULL;
    return Node;
}
void search(node* root, char x, char newData){
    if(root==NULL)
        return ;
    if(root->data==x){
        root->data=newData;
    }
    search(root->lchild,x,newData);
    search(root->rchild,x,newData);
}
void insert(node* &root, char x){
    if(root==NULL){
        root=newNode(x);
        return ;
    }
    if(root->lchild==NULL){
        insert(root->lchild,x);
    } else{
        insert(root->rchild,x);
    }
}
node* create(char data[], char n){
    node* root=NULL;
    for(int i=0;i<n;i++){
        insert(root,data[i]);
    }
    return root;
}
void preOrder(node *root){
    if(root==NULL)
        return;
    printf("%c\n",root->data);
    preOrder(root->lchild);
    preOrder(root->rchild);

}
void intOrder(node *root){
    if(root==NULL)
        return;

    preOrder(root->lchild);
    printf("%c\n",root->data);
    preOrder(root->rchild);

}
/*
int main(){
    char data[]={'A','B','D','E','F','C'};
    node* node1=create(data,6);
    //preOrder(node1);
    intOrder(node1);
}
 */