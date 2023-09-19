#include<bits/stdc++.h>
using namespace std;
int n, m, s, t;
char a[100][100];
bool visit[100][100];
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};
bool dfs(int i,int j){
    cout << i << " " << j << endl;
    if(a[i][j]=='B'){
        return true;
    }
    //a[i][j] = 'x';
    visit[i][j] = true;
    for (int k = 0; k < 4;k++){
        int i_1 = i + dx[k];
        int j_1 = j + dy[k];
        if(i_1>=1&&i_1<=n&&j_1>=1&&j_1<=m&&a[i_1][j_1]!='x'&&!visit[i_1][j_1]){
            if(dfs(i_1,j_1))
                return true;
        }
    }
    return false;
}
void printf(){
    cout << "invite to you enter of the n and m: ";
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
    if(dfs(s,t))
    {
        cout << "yes";
    }else{
        cout << "no";
    }
}
int main(){
    printf();
    return 0;
}