#include<bits/stdc++.h>
using namespace std;
int n, m, s, t;
char a[100][100];
bool visit[100][100];
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};
bool bfs(int i,int j){
    queue<pair<int, int>> q;
    q.push({i, j});
    visit[i][j] = true;
    while(!q.empty()){
        pair<int, int> v = q.front();
        q.pop();
        for (int k = 0; k < 4;k++){
            int i_1 = v.first + dx[k];
            int j_1 = v.second + dy[k];
            if(i_1>=1&&i_1<=n&&j_1>=1&&j_1<=m&a[i][j]!='x'&&!visit[i_1][j_1]){
                cout << i_1 << " " << j_1 << endl;
if(a[i_1][j_1]=='B')
    return true;
q.push({i_1, j_1});
visit[i_1][j_1] = true;
            }
        }
    }
}
void printf(){
    cout << "invite to you ennter of the n and m: " << endl;
    cin >> n >> m;
    for (int i = 1; i <= n;i++){
        for (int j = 1; j <= m;j++){
            cin >> a[i][j];
            if(a[i][j]=='A'){
s = i;
t = j;
            }
        }
    }
    memset(visit, false, sizeof(visit));
    if(bfs(s,t)){
        cout << " yes";
    }else {
        cout << "no";
    }
}
int main(){
    printf();
    return 0;
}