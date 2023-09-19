#include<bits/stdc++.h>
using namespace std;
int n;
int a[100][100];
vector<int> v[100];
void prinf(){
    for (int i = 1; i <= n;i++){
        for (int j = 1; j <= n;j++){
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= n;i++){
        for (int j = 1; j <= n;j++){
            if(a[i][j]){
                v[i].push_back(j);
            }
        }
    }
    for (int i = 1; i <= n;i++){
        cout << i << ": ";

        for(auto x:v[i]){
            cout << x << " ";
        }
        cout << endl;
    }
}
int main(){
    cin >> n;
    prinf();
    return 0;
}