#include<bits/stdc++.h>
using namespace std;
int n;
int a[100][100];
vector<pair<int, int>> v;
void print(){
    for (int i = 1; i<= n;i++){
        for (int j = 1; j <= n;j++){
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= n;i++){
        for (int j = 1; j <= n;j++){
            if(a[i][j]&&i<j){
                v.push_back({i, j});
            }
        }
    }
    for(auto x:v){
        cout << x.first << " " << x.second << endl;
    }
}
int main(){
    cin >> n;
    print();
    return 0;
}