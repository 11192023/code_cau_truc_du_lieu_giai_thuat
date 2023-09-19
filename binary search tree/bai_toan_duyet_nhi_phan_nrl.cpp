#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *left;
    struct node *right;
};
typedef struct node node;
typedef node *tree;
void kt(tree& t){
    t = NULL;
}
void makenode(tree& t,int x){
    if(t==NULL){
     node *tmp = new node();
        tmp->data = x;
        tmp->left = NULL;
        tmp->right = NULL;
        t = tmp;
    }
    else{
        if(t->data>x){
            makenode(t->left, x);
        }
        else if(t->data<x){
            makenode(t->right, x);
        }
    }
}
void NRL(tree t){
    if(t!=NULL){
        cout << t->data << " ";
        NRL(t->right);
        NRL(t->left);
    }
}
void menu(tree &t){
    while(1){
        system("cls");
        cout << " the list of the choose" << endl;
        cout << "1.enter of the input for the tree" << endl;
        cout << "2.print" << endl;
        cout << "3.close" << endl;
        cout << "invive to the choose above" << endl;
        int x;
        cin >> x;
        if(x<=0||x>2){
            cout << "invalid" << endl;
        }else if(x==1){
            cout << "enter of the number for the tree" << endl;
            int x;
            cin >> x;
            makenode(t, x);
        }else if(x==2){
            NRL(t);
            system("pause");
        }else if(x==3){
            break;
        }
    }
}
int main(){
    tree t;
    kt(t);
    menu(t);
    return 0;
}