#include <bits/stdc++.h>
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
void NLR(tree t){
    if(t!=NULL){
        cout << t->data << " ";
        NLR(t->left);
        NLR(t->right);
    }
}
void NRL(tree t){
    if(t!=NULL){
        cout << t->data << " ";
        NRL(t->right);
        NRL(t->left);
    }
}
void LNR(tree t){
if(t!=NULL){
        LNR(t->left);
        cout << t->data << " ";
        LNR(t->right);
}
}
void RNL(tree t){
    if(t!=NULL){
        RNL(t->right);
        cout << t->data << " ";
        RNL(t->left);
    }
}
void LRN(tree t){
    if(t!=NULL){
        LRN(t->left);
        LRN(t->right);
        cout << t->data << " ";
            }
}
void RLN(tree t){
    if(t!=NULL){
        RLN(t->right);
        RLN(t->left);
        cout << t->data << " ";
    }
}
int isprime(int n){
    for (int i = 2; i <= sqrt(n);i++){
        if(n%i==0){
            return 0;
        }
    }
    return n > 1;
}
int cnt = 0;
void count(tree t){
    if(t!=NULL){
        if(isprime(t->data)){
            cnt++;
        }
        count(t->left);
        count(t->right);
    }
}
void check_1(tree t){
    if(t!=NULL){
        if(t->left!=NULL&&t->right!=NULL){
            cout << t->data << " ";
        }
        check_1(t->left);
        check_1(t->right);
    }
}
void check_2(tree t){
    if(t!=NULL){
        if(t->left==NULL&&t->right==NULL){
            cout << t->data << " ";
        }
        check_2(t->left);
        check_2(t->right);
    }
}
void check_3(tree t){
    if(t!=NULL){
        if(t->left!=NULL&&t->right==NULL||t->right!=NULL&&t->left==NULL){
            cout << t->data << " ";
        }
        check_3(t->left);
        check_3(t->right);
    }
}
struct node* find(tree t,int x){
    if(t==NULL){
        return NULL;
    }else{
        if(t->data>x){
            find(t->left, x);
        }else if(t->data<x){
            find(t->right, x);
        }else {
            return t;
        }
    }
}
int max1 = INT_MIN;
void check_4(tree t){
    if(t!=NULL){
        if(t->data>max1){
            max1 = t->data;
        }
        check_4(t->left);
        check_4(t->right);
    }
}
int min1 = INT_MAX;
void check_5(tree t){
    if(t!=NULL){
        if(t->data<min1){
            min1 = t->data;
        }
        check_5(t->left);
        check_5(t->right);
    }
}
int max(tree t){
    if(t->left==NULL&&t->right==NULL){
        return t->data;
    }
    int max1 = t->data;
    if(t->left!=NULL){
        int left = max(t->left);
        if(max1<left){
            max1 = left;
        }
    }
    if(t->right!=NULL){
        int right = max(t->right);
        if(max1>right){
            max1 = right;
        }
    }
    return max1;
}
int min(tree t){
    if(t->left==NULL&&t->right==NULL){
        return t->data;
    }
    int min1 = t->data;
    if(t->left!=NULL){
        int left = min(t->left);
        if(min1>left){
            min1 = left;
        }
    }
    if(t->right!=NULL){
        int right = min(t->right);
        if(min1>right){
            min1 = right;
        }
    }
    return min1;
}
int check_7(tree t){
    if(t->right==NULL){
        return t->data;
    }
    return check_7(t->right);
}
int check_8(tree t){
    if(t->left==NULL){
        return t->data;
    }
    return check_8(t->left);
}
void menu(tree t){
    while(1){
        system("cls");
        cout << "the list of the tree" << endl;
        cout << "1.enter of the input of tree" << endl;
        cout << "2. print the list according to NLR" << endl;
        cout << "3.print the list according to NRL" << endl;
        cout << "4.  print  the list according to LNR" << endl;
        cout << "5. print the list according to RNL" << endl;
        cout << "6.  print the list according to LRN" << endl;
        cout << "7. print the list according to RLN" << endl;
        cout << "8.print the list according to tree only has a baby" << endl;
        cout << "9. print the list according to the tree has two baby" << endl;
        cout << "10. print the list according to the tree does not has baby" << endl;
        cout << "11. find a node in the list " << endl;
        cout << "12.find max in the list of the tree" << endl;
        cout << "13.find min in the list of the tree" << endl;
        cout << "invite to choose in the list above" << endl;
        int x;
        cin >> x;
        if(x==1){
            cout << "invite enter of the number for the tree" << endl;
            int x;
            cin >> x;
            makenode(t, x);
        }else if(x==2){
            cout << "the list of the tree according NLR" << endl;
            NLR(t);
            system("pause");
        }else if (x==3){
            cout << "the  list of the tree according NRL" << endl;
            NRL(t);
            system("pause");
        }else if(x==4){
            cout << "the list of the tree acccording to LNR" << endl;
            LNR(t);
            system("pause");
        }else if(x==5){
            cout <<"the list of the tree according to RNL" << endl;
            RNL(t);
            system("pause");
        }else if (x==6){
            cout << "the lis of the tree according to LRN" << endl;
            LRN(t);
            system("pause");
        }else if(x==7){
            cout << "the  list of the tree according to RLN" << endl;
            RLN(t);
            system("pause");
        }else if(x==8){
            cout << "the list of the tree only has a baby" << endl;
            check_3(t);
            system("pause");
        }else if(x==9){
            cout << "the list of the tree has two baby" << endl;
            check_1(t);
            system("pause");
        }else if(x==10){
            cout << " the list of the tree does not baby " << endl;
            check_2(t);
            system("pause");
        }else if(x==11){
            cout << "enter of the number to find" << endl;
            int x;
            cin >> x;
            struct node *p = find(t, x);
            if(p==NULL){
                cout << "invalid!" << endl;
            }else {
                cout << "valid" << endl;
            }
            system("pause");
        }else if(x==12){
            cout << "max of the tree is: " << max(t) << endl;
            system("pause");
        }
        else if (x==13){
            cout << "min of the tree is: " << min(t) << endl;
            system("pause");
        }else {
            break;
        }
    }
}
int main()
{
    tree t;
    kt(t);
    menu(t);
    return 0;
}