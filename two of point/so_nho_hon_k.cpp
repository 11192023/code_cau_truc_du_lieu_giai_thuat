#include<iostream>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    int a[100];
    int d = 0;
    for (int i = 0; i < n;i++){
        cin >> a[i];
        if(a[i]<=k){
            d++;
        }
    }
    int cnt = 0;
    for (int i = 0; i < d;i++){
        if(a[i]<=k){
            cnt++;
        }
    }
    int ans = cnt;
    for (int i = d; i < n;i++){
        if(a[i-k]<=k)
            cnt--;
        if(a[i]<=k)
            cnt++;
            ans = max(ans, cnt);
    }
    cout << d - ans << endl;
    return 0;
}