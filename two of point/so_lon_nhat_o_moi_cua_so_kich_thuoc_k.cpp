#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n>>k;
    int a[100];
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    for (int i = 0; i <= n - k;i++){
        int res = INT_MIN;
        for (int j = 0; j < k;j++){
            res = max(res, a[i + j]);
        }
        cout << res << " ";
    }
    return 0;
}