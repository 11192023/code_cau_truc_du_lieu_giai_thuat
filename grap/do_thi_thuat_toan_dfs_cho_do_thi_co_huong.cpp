#include<bits/stdc++.h>
using namespace std;
int n, m;
vector<int> a[100];
bool visit[100];
void print(){
    cin >> n >> m;
    for (int i = 1; i <= m;i++){
        int x, y;
        cin >> x >> y;
        a[x].push_back(y);
    }
    memset(visit, false, sizeof(visit));
}
void dfs(int u){
    cout << u << " ";
    visit[u] = true;
    for(auto x:a[u]){
        if(!visit[x]){
            dfs(x);
        }
    }
}
int main(){
    print();
    dfs(1);
    return 0;
}