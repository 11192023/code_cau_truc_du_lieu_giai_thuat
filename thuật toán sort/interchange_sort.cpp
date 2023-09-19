#include<iostream>
using namespace std;
void interchange_sort(int a[],int n){
    for (int i = 0; i < n - 1;i++){
        int min = i;
        for (int j = i+1; j < n;j++){
            if(a[j]<a[min]){
                min = j;
            }
        }
        int tmp = a[i];
        a[i] = a[min];
        a[min] = tmp;
    }
}
int main(){
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    interchange_sort(a, n);
    for (int i = 0; i< n;i++){
        cout << a[i] << " ";
    }
    return 0;
}