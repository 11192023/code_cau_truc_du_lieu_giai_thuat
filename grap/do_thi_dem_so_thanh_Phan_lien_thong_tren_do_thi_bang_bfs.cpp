#include<bits/stdc++.h>
using namespace std;
int n, m;
vector<int> a[100];
bool visit[100];
void printf(){
    cin >> n >> m;
    for (int i = 1; i <= m;i++){
        int x;
        int y;
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
}
void bfs(int u){
    queue<int> q;
    q.push(u);
    visit[u] = true;
    while(!q.empty()){
        int v = q.front();
        q.pop();
        cout << v << " ";
        for(auto x:a[v]){
            if(!visit[x]){
                visit[x] = true;
                q.push(x);
            }
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
            bfs(i);
        }
        cout << endl;
    }
}
int main(){
    printf();
    int ans = count();
    cout << ans << endl;
    return 0;
}