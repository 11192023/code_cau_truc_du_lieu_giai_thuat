#include<iostream>
using namespace std;
int partition(int a[],int l,int r){
    int p = a[r];
    int i = l - 1;
    for (int j = 0; j < r;j++){
        if(a[j]<p){
            i++;
            swap(a[i], a[j]);
        }
    }
    i++;
    swap(a[i], a[r]);
    return i;
}
void quick_sort(int a[],int l,int r){
    if(l>=r)
        return;
    int p = partition(a, l, r);
    quick_sort(a, l, p - 1);
    quick_sort(a, p + 1, r);
}
int main(){
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    quick_sort(a, 0, n - 1);
    for (int i = 0; i < n;i++){
        cout << a[i] << " ";
    }
    return 0;
}