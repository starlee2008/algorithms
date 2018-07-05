//
// Created by starlee on 2018/6/21.
//

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    node *next;
};

node *create(int arr[]) {
    node *p, *pre, *head;
    head = new node;
    head->next = NULL;
    pre = head;
    for (int i = 0; i < 5; i++) {
        p = new node;
        p->data = arr[i];
        p->next = NULL;
        pre->next = p;
        pre = p;
    }
    return head;
}

int search(node *head, int x) {
    int count = 0;
    node *p = head->next;
    while (p != NULL) {
        if (p->data == x) {
            count++;
        }
        p = p->next;
    }
    return count;
}

void printNode(node *l) {
    node *L = l->next;
    while (L != NULL) {
        printf("%2d", L->data);
        L = L->next;
    }
}

void insert(node *head, int pos, int x) {
    node *p = head;
    for (int i = 0; i < pos - 1; i++) {
        p = p->next;
    }
    node *q = new node;
    q->data = x;
    q->next = p->next;
    p->next = q;
}

void del(node *head, int x) {
    node *p = head->next;
    node *pre = head;
    while (p != NULL) {
        if (p->data == x) {
            pre->next = p->next;
            delete p;
            p = pre->next;
        } else {
            pre = p;
            p = p->next;
        }
    }

}
/*
int main(){
    int arr[5]={5,3,6,1,2};
    node* L=create(arr);
    printNode(L);
    printf("\n");
    int count=search(L,6);
    insert(L,3,10);
    printNode(L);
    printf("\n");
    del(L,10);
    printNode(L);
    printf("\n");
    printf("%3d\n",count);

}
 */