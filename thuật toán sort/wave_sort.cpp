#include<iostream>
using namespace std;
void wave_sort(int a[],int n){
    for (int i = 0; i < n - 1;i++){
        bool flag = true;
        if(flag){
            if(a[i]>a[i+1]){
                swap(a[i], a[i + 1]);
            }
        }else{
            if(a[i]<a[i+1]){
                swap(a[i], a[i + 1]);
            }
        }
        flag = !flag;
    }
}
int main(){
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    wave_sort(a, n);
    for (int i = 0; i < n;i++){
        cout << a[i] << " ";
    }
        return 0;
}