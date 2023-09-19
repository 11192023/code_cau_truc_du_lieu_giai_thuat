#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *left;
    struct node *right;
};
typedef struct node node;
typedef node * tree;
void kt(tree &t){
    t = NULL;
}
void makenode(tree &t,int x){
    if(t==NULL){
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
void NLR(tree t){
    if(t!=NULL){
        cout << t->data << " ";
        NLR(t->left);
        NLR(t->right);
    }
}
int isprime (int n){
    for (int i = 2; i <= sqrt(n);i++){
        if(n%i==0){
            return 0;
        }
    }
    return n > 1;
}
int ans = 0;
void count(tree t){
    if(t!=NULL){
        if(isprime(t->data)){
            ans++;
        }
        count(t->left);
        count(t->right);
    }
}
struct node* check(tree t,int x){
  if(t==NULL){
        return NULL;
  }else{
    if(t->data<x){
            check(t->right, x);
    }else if(t->data>x){
            check(t->left, x);
    }else{
            return t;
    }
  }
}
int main(){

    return 0;
}