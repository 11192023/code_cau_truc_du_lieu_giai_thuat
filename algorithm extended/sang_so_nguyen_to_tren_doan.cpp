#include<bits/stdc++.h>
using namespace std;
void init(int l,int r){
    int a[r - l + 1];
    for (int i = 0; i < r - l + 1;i++){
        a[i] = 1;
    }
    for (int i = 2; i <= sqrt(r);i++){
        for (int j = max(i * i, (l + i - 1) / i * i); j <= r; j += i)
        {
            a[j - l] = 0;
        }
    }
    for (int i = max(2, l); i <= r;i++){
        if(a[i-l]){
            cout << i << " ";
        }
    }
}
int main(){
    int l, r;
    cin >> l >> r;
    init(l,r);
    return 0;
}