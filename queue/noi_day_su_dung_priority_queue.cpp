#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    priority_queue<int, vector<int>, greater<int>> pq;
    for(auto x:a){
        pq.push(x);
    }
    int ans = 0;
    while(pq.size()>1){
        int top_1 = pq.top();
        pq.pop();
        int top_2 = pq.top();
        pq.pop();
        ans += top_1 + top_2;
        pq.push(top_1 + top_2);
   }
    cout << ans << endl;
    return 0;
}