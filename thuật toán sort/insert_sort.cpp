#include<iostream>
using namespace std;
void insert_sort(int a[],int n){
    for (int i = 1; i < n;i++){
        int x = a[i];
        int pos = i - 1;
        while(pos>=0&&x<=a[pos]){
            a[pos + 1] = a[pos];
            pos--;
        }
        a[pos + 1] = x;
    }
}
int main(){
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    insert_sort(a, n);
    for (int i = 0; i < n;i++){
        cout << a[i] << " ";
    }
    return 0;
}