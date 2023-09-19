#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node *next;
};
typedef struct Node* node;
node makenode(int x){
    node tmp = new struct Node();
    tmp->data = x;
    tmp->next = NULL;
    return tmp;
}
int size(node a){
    int cnt = 0;
    while(a!=NULL){
        cnt++;
        a = a->next;
    }
    return cnt;
}
bool empty(node a){
    return a == NULL;
}
void insert_first(node &a,int x){
    node tmp = makenode(x);
    if(a==NULL){
        a = tmp;
    }
    else{
        tmp->next = a;
        a = tmp;
    }
}
void insert_last(node& a,int x){
    node tmp = makenode(x);
    if(a==NULL){
        a = tmp;
    }else{
        node p = a;
        while(p->next!=NULL){
            p = p->next;
        }
        p->next = tmp;
    }
}
void insert_middle(node& a,int pos,int x){
    int n = size(a);
    if(pos<=0||pos>n+1){
        cout << "invalid!";
        return;
    }
    if(pos==1){
        insert_first(a, x);
    }
    if(pos==n+1){
        insert_last(a, x);
    }
    node tmp = makenode(x);
    node pre = NULL;
    node af = a;
    for (int i = 1; i < pos ;i++){
        pre = af;
        af = af->next;
    }
    tmp->next = af;
    pre->next = tmp;
}
void delete_first(node&a){
    if(a==NULL){
        return;
    }
    a = a->next;
}
void delete_last(node& a){
    if (a == NULL){
        return;
    }
    else{
        node pre = NULL;
        node af = a;
        while(af->next!=NULL){
            pre = af;
            af = af->next;
        }
        pre->next = NULL;
    }
}
void delete_middle(node& a,int pos){
    int n = size(a);
    if(pos<=0||pos>n){
        cout << "invalid!";
        return;
    }
    if(pos==1){
        delete_first(a);
    }
    if(pos==n){
        delete_last(a);
    }
    node pre = NULL;
    node af = a;
    for (int i = 1; i < pos;i++){
        pre = af;
        af = af->next;
    }
    pre->next = af ->next;
    af->next = NULL;
}
void print(node a){
    while(a!=NULL){
        cout << a->data << " ";
        a = a->next;
    }
    cout << endl;
}
int main(){
    node head = NULL;
    while(1){
        cout << "DANH SACH" << endl;
        cout << "1. Chen 1 phan tu vao dau" << endl;
        cout << "2. Chen 1 phan tu vao cuoi" << endl;
        cout << "3. Chen 1 phan tu vao giua" << endl;
        cout << "4. xoa 1 phan tu o dau" << endl;
        cout << "5. xoa 1 phan tu vao cuoi" << endl;
        cout << "6. xoa 1 phan tu o giua" << endl;
        cout << "7. in ra chuong trinh" << endl;
        cout << "8.thoat khoi chuong trinh" << endl;
        cout << " Moi moi nguoi nhap lua chon" << endl;
        int x;
        cin >> x;
        if(x==1){
            cout << "moi moi nguoi nhap so muon them vao" << endl;
            int b;
            cin >> b;
            insert_first(head, b);
        }if(x==2){
            cout << "moi moi nguoi nhap so muon them vao" << endl;
            int b;
            cin >> b;
            insert_last(head, b);
        }if(x==3){
            cout << "moi moi nguoi nhap so muon them vao" << endl;
            int b;
            cin >> b;
            cout << "moi moi nguoi nhap vi tri muon them vao" << endl;
            int pos;
            cin >> pos;
            insert_middle(head, pos, b);
        }if(x==4){
            delete_first(head);
        }
        if(x==5){
            delete_last(head);
        }
        if(x==6){
            cout << "moi moi nguoi nhap vi tri muon xoa" << endl;
            int pos;
            cin >> pos;
            delete_middle(head, pos);
        }
        if(x==7){
            print(head);
        }
        if(x==8){
            break;
        }
    }
    return 0;
}