#include<bits/stdc++.h>
using namespace std;
vector<string> res;
void init(){
    queue<string> q;
    q.push("6");
    q.push("8");
    res.push_back("6");
    res.push_back("8");
    while(1){
        string top = q.front();
        q.pop();
        if(top.size()==11)
            break;
        res.push_back(top + "6");
        res.push_back(top + "8");
        q.push(top + "6");
        q.push(top + "8");
    }
}
int main(){
    init();
    int t;
    cin >> t;
    while(t--){
        int k;
        cin >> k;
        vector<string> token;
        int count = 0;
        while(res[count].size()<=k){
            token.push_back(res[count]);
            count++;
        }
        reverse(token.begin(), token.end());
        for (int i = 0; i < token.size();i++)
        {
            cout << token[i] << " ";
        }
    }
    return 0;
}