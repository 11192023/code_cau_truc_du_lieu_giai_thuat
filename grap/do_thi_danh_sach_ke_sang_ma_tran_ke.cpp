#include<bits/stdc++.h>
using namespace std;
int n;
int a[100][100];
void printf(){
    for (int i = 1; i <= n;i++){
        cin.ignore();
        string s;
        getline(cin, s);
        string token;
        stringstream ss(s);
        while(ss>>token){
            a[i][stoi(token)] = 1;
        }
    }
    for (int i = 1; i <= n;i++){
        for (int j = 1; j <= n;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
    cin >> n;
    printf();
    return 0;
}