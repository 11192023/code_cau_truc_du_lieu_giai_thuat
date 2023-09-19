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
    memset(visit, false, sizeof(visit));
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
                q.push(x);
                visit[x] = true;
            }
        }
    }
}
int main(){
    printf();
    bfs(1);
    return 0;
}