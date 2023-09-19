#include<bits/stdc++.h>
using namespace std;
int n, m, s, t, u, v;
char a[100][100];
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};
int dp[100][100];
void bfs(int i,int j){
    queue<pair<int, int>> q;
    q.push({i, j});
    dp[i][j] = 0;
    a[i][j] = 'x';
    while(!q.empty()){
        pair<int, int> v = q.front();
        q.pop();
        for (int k = 0; k < 4;k++){
            int i_1 = v.first + dx[k];
            int j_1 = v.second + dy[k];
            if(i_1>=1&&i_1<=n&&j_1>=1&&j_1<=m&&a[i_1][j_1]!='x'){
                dp[i_1][j_1] = dp[v.first][v.second] + 1;
                if(a[i_1][j_1]=='B'){
                    return;
                }
                q.push({i_1, j_1});
                a[i_1][j_1] = 'x';
            }
        }
    }
}
void printf(){
    cout << "invite to you enter of the n and m: " << endl;
    cin >> n >> m;
    for (int i = 1; i <= n;i++){
        for (int j = 1;j <= m;j++){
            cin >> a[i][j];
            if(a[i][j]=='A'){
                s = i;
                t = j;
            }else if(a[i][j]=='B'){
                u = i;
                v = j;
            }
        }
    }
    bfs(s, t);
if(dp[u][v]==0){
        cout << "invalid!";
}else {
        cout << dp[u][v] << endl;
}
}
int main(){
printf();
return 0;
}