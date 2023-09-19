#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int n = s.size();
    s = "x" + s;
    int d[n + 1][n + 1];
    memset(d, 0, sizeof(d));
    for (int i = 1; i <= n;i++){
        d[i][i] = 1;
    }
    int ans = 0;
    for (int len = 2; len <= n;len++){
        for (int i = 1; i <= n - len + 1;i++){
            int j = i + len - 1;
            if(len==2&&s[i]==s[j])
                d[i][j] = 1;
                else{
                d[i][j] = s[i + 1] == s[j - 1] && s[i] == s[j];
                }
            if(d[i][j]){
                ans = max(ans, len);
            }
        }
    }
    for (int i = 1; i <= n;i++){
        for (int j = 1; j <= n;j++){
            cout << d[i][j] << " ";
        }
        cout << endl;
    }
        cout << ans << endl;
    return 0;
}