#include<bits/stdc++.h>
using namespace std;
int a[10001];
void init(){
    for (int i = 0; i <= 10000;i++){
        a[i] = 1;
    }
    a[0] = a[1] = 0;
    for (int i = 2; i <= sqrt(10000);i++){
        if(a[i]){
            for (int j = i * i; j <= 10000;j+=i){
                a[j] = 0;
            }
        }
    }
}
int main(){
    init();
    int n;
    cin >> n;
    for (int i = 2; i <= n;i++){
        if(a[i]){
            cout << i << " ";
        }
    }
        return 0;
}