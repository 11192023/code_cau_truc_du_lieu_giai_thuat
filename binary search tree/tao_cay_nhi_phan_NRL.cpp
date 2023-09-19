#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *left;
    struct node *right;
};
typedef struct node node;
typedef node *tree;
void kt(tree&t){
    t = NULL;
}
void makenode(tree &t,int x){
    if (t == NULL){
        struct node *tmp = new struct node();
        tmp->data = x;
        tmp->left = NULL;
        tmp->right = NULL;
        t = tmp;
    }else{
        if(t->data>x){
            makenode(t->left, x);
        }else if(t->data<x){
            makenode(t->right, x);
        }
    }
}
void NRL(tree t){
    if(t!=NULL)
        {cout << t->data << " ";
        NRL(t->right);
        NRL(t->left);
        }
}
int main(){

    return 0;
}