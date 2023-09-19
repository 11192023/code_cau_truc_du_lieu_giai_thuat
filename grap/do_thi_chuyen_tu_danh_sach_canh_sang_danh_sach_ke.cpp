#include<bits/stdc++.h>
using namespace std;
int n, m;
vector<int> a[100];
void print(){
    for (int i = 1; i <= m;i++){
        int x, y;
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    for (int i = 1; i <= n;i++){
        cout << i << ": ";
        for(auto x: a[i]){
            cout << x << " ";
        }
        cout << endl;
    }
}
int main(){
    cin >> n >> m;
    print();
    return 0;
}