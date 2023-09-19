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
void makenode(tree&t,int x){
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
void RNL(tree t){
    if(t!=NULL){
    RNL(t->right);
    cout << t->data << " ";
    RNL(t->left);
    }
}
void menu(tree &t)
{
    while (1)
    {
    system("cls");
    cout << "The list of the tree" << endl;
    cout << "1.enter of the input" << endl;
    cout << "2.print the result" << endl;
    cout << "invite to the choose above " << endl;
    int x;
    cin >> x;
    if (x <= 0 || x > 2)
    {
        cout << "invalid!";
    }
    else if (x == 1)
    {
        cout << "enter of the data for the tree" << endl;
        int x;
        cin >> x;
        makenode(t, x);
    }
    else if (x == 2)
    {
        RNL(t);
        system("pause");
    }
    else
    {
        break;
    }
    }
}
int main(){
    return 0;
}
