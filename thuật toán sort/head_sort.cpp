#include<bits/stdc++.h>
using namespace std;
void headify(int a[],int n,int i){
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if(left<n&&a[largest]<a[left]){
        largest = left;
    }
    if (right < n && a[right] > a[largest]){
        largest = right;
    }
    if(largest!=i){
        swap(a[i], a[largest]);
        headify(a, n, largest);
    }
}
void head_sort(int a[],int n){
    for (int i = n/2-1; i >= 0;i--){
        headify(a, n, i);
    }
    for (int i = n - 1; i >= 0;i--){
        swap(a[i], a[0]);
        headify(a, i, 0);
    }
}
int main(){
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    head_sort(a, n);
    for (int i = 0; i < n;i++){
        cout << a[i] << " ";
    }
    return 0;
}