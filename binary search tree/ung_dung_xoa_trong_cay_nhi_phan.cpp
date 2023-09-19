#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *left;
    struct node *right;
};
typedef struct node node;
typedef node *tree;
void kt(tree &t){
    t = NULL;
}
void makenode(tree&t ,int x){
    if(t==NULL){
        struct node *tmp = new struct node();
        tmp->data = x;
        tmp->left = NULL;
        tmp->right = NULL;
        t = tmp;
    }else {
        if(t->data>x){
            makenode(t->left, x);
        }else if(t->data<x){
            makenode(t->right, x);
        }
    }
}
void LNR(tree t){
    if(t!=NULL){
        LNR(t->left);
        cout << t->data << " ";
        LNR(t->right);
    }
}
void find_node(tree& x,tree &y){
if(y->right !=NULL){
        find_node(x, y->right);
}else {
        x->data = y->data;
        x = y;
        y = y->left;
}
}
void delete_node(tree &t,int x){
    if(t==NULL){
        return;
    }else{
        if(t->data>x){
            delete_node(t->left, x);
        }else if(t->data<x){
            delete_node(t->right, x);
        }else {
            struct node *tmp = t;
            if(t->left==NULL){
                t = t->right;
            }else if(t->right==NULL){
                t = t->left;
            }
            else {
                find_node(tmp, t->left);
            }
            delete (tmp);
        }
    }
}
void menu(tree t){
    while(1){
        system("cls");
        cout << "the lsit of the choose" << endl;
        cout << "1. enter of the input for the tree" << endl;
        cout << " 2. delete node in tree" << endl;
        cout << "3. print" << endl;
        cout << "4. close" << endl;
        cout << "invite enter of the above option: ";
        int x;
        cin >> x;
        if(x==1){
            cout << " enter of the number for tree: ";
            int x;
            cin >> x;
            makenode(t, x);
        }else if(x==2){
            cout << " enter of the number want to delete in the tree: ";
            int x;
            cin >> x;
            delete_node(t, x);
        }else if(x==3){
            cout << "the list of the number in the tree: ";
            LNR(t);
            system("pause");
        }else {
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