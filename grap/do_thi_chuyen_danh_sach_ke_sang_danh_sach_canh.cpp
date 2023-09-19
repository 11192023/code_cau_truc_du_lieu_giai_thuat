#include<bits/stdc++.h>
using namespace std;
int n;
vector<pair<int, int>> v;
void printf(){
    for (int i = 1; i <= n;i++){
        cin.ignore();
        string s;
        getline(cin, s);
        stringstream ss(s);
        string token;
        while(ss>>token){
            if(stoi(token)>i){
                v.push_back({i, stoi(token)});
            }
        }
    }
    for (auto x:v){
        cout << x.first << " " << x.second << endl;
    }
}
int main(){
    cin >> n;
    printf();
    return 0;
}