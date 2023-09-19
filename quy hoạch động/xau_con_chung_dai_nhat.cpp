#include<bits/stdc++.h>
using namespace std;
int main(){
    string x, y;
    cin >> x >> y;
    int n = x.size();
    int m = y.size();
    x = "x" + x;
    y = "y" + y;
    int d[n + 1][m + 1];
    memset(d, 0, sizeof(d));
    for (int i = 0; i <= n;i++){
        for (int j = 0; j <= m;j++){
            if(i==0||j==0){
                d[i][j] = 0;
            }else{
                if(x[i]==y[j]){
                    d[i][j] = d[i - 1][j - 1] + 1;
                }
                else{
                    d[i][j] = max(d[i - 1][j], d[i][j - 1]);
                }
            }
        }
    }
    cout << d[n][m];
    return 0;
}