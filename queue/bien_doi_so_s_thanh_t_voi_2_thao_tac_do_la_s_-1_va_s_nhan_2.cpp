#include<bits/stdc++.h>
using namespace std;
int path(int s,int t){
    queue<pair<int, int>> q;
    set<int> a;
    q.push({s, 0});
    a.insert(s);
while(!q.empty()){
    pair<int, int> top = q.front();
    q.pop();
    if(top.first==t)
        return top.second;
    if(top.first-1==t||top.first*2==t){
        return top.second + 1;
    }
    if(a.find(top.first*2)== a.end()&&top.first<t){
        q.push({top.first * 2, top.second + 1});
        a.insert(top.first * 2);
    }
if(a.find(top.first-1)==a.end()&&top.first>1){
        q.push({top.first - 1, top.second + 1});
        a.insert(top.first - 1);
}
}
}
int main(){
int t;
cin >> t;
while(t--){
int s, t;
cin >> s >> t;
cout << path(s, t) << endl;
}
return 0;
}