#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int k;
    cin >> s>>k;
    map<char, int> mp;
    for(auto x:s){
        mp[x]++;
    }
    priority_queue<int> pq;
    for(auto x:mp){
        pq.push(x.second);
    }
while(k>0){
        int top = pq.top();
        pq.pop();
        top--;
        k--;
        pq.push(max(top, 0));
}
int ans = 0;
while(!pq.empty()){
        ans += pq.top() * pq.top();
        pq.pop();
}
cout << ans << endl;
return 0;
}