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
void dfs(int u){
    cout << u << " ";
    visit[u] = true;
    for(auto v:a[u]){
        if(!visit[v]){
            dfs(v);
        }
    }
}
int main(){
    printf();
    dfs(1);
    return 0;
}