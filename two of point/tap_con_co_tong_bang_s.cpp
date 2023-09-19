#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, s;
    cin >> n >> s;;
    int a[100];
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    vector<int> dp(s + 1,false);
    dp[0] = 1;
    for (int i = 0; i < n;i++){
        for (int j = s; j >= a[i];j--){
            if(dp[j-a[i]]==true){
                dp[j] = true;
            }
        }
    }
    cout << dp[s] << endl;
    return 0;
}