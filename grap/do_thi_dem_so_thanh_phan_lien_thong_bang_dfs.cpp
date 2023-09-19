#include<bits/stdc++.h>
using namespace std;
int n, m;
vector<int> a[100];
bool visit[100];
void printf(){
    cin >> n >> m;
    for (int i = 1; i <= m;i++){
        int x, y;
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
}
void dfs(int u){
    cout << u << " ";
    visit[u] = true;
    for(auto v:a[u]){
        if(!visit[v]){
            dfs(v);
        }
    }
}
int count(){
    memset(visit, false, sizeof(visit));
    int cnt = 0;
    for (int i = 1; i <= n;i++){
        if(!visit[i]){
            cnt++;
            cout << cnt << ": ";
            dfs(i);
        }
        cout << endl;
    }
    return cnt;
}
int main(){
    printf();
    int ans = count();
    cout << endl;
    cout << ans;
}