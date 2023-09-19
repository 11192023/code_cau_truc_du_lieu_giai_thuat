#include<bits/stdc++.h>
using namespace std;
int n, m, s, t;
vector<int> a[100];
bool visit[100];
int parent[100];
void print(){
    cout << "invite to you enter of the n and m: ";
    cin >> n >> m;
    for (int i = 1; i <= m;i++){
        int x, y;
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
        for(auto x:a[v]){
            if(!visit[x]){
                parent[x] = v;
                visit[x] = true;
                q.push(x);
            }
        }
    }
}
void path(){
    memset(visit, false, sizeof(visit));
    memset(parent, 0, sizeof(parent));
    cout << "invite to you enter of the s and t: ";
    cin >> s >> t;
    bfs(s);
    if(!visit[t]){
        cout << "invalid!";
    }else{
        vector<int> path;
        while(t!=s){
            path.push_back(t);
            t = parent[t];
        }
        path.push_back(s);
        reverse(path.begin(), path.end());
        for(auto x: path){
            cout << x << " ";
        }
    }
}
int main(){
    print();
    path();
    return 0;
}