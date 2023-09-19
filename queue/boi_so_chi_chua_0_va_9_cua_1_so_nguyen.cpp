#include<bits/stdc++.h>
using namespace std;
int a[1000000]={0};
vector<long long> res;
void init(){
    queue<string> q;
    q.push("9");
    res.push_back(9);
    while(1){
        string top = q.front();
        q.pop();
        if(top.length()==14)
            break;
        res.push_back(stoll(top + "0"));
        res.push_back(stoll(top + "9"));
        q.push(top + "0");
        q.push(top + "9");
    }
    int cnt = 0;
    for (int i = 1; i <= 100;i++){
        for(auto x:res){
            if(x%i==0){
                a[i] = x;
                break;
            }
            }
        }
}
int main(){
        init();
        int t;
        cin >> t;
        while(t--){
            int n;
            cin >> n;
            cout << a[n] << endl;
        }
        return 0;
}