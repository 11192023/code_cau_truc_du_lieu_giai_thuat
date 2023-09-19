#include<bits/stdc++.h>
using namespace std;
int n,a[100], c[100], d1[100], d2[100];
int b[100][100];
void print(){
    memset(b, 0, sizeof(b));
    for (int i = 1; i <= n;i++){
        b[i][a[i]] = 1;
    }
    for (int i = 1; i <= n;i++){
        for (int j = 1; j <= n;j++){
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void tri(int i){
    for (int j = 1; j <= n;j++){
        if(c[j]==1&&d1[i-j+n]==1&&d2[i+j-1]==1){
            c[j] = d1[i - j + n] = d2[i + j - 1] = 0;
            a[i] = j;
            if(i==n){
                print();
            }else{
                tri(i + 1);
            }
            c[j] = d1[i - j + n] = d2[i + j - 1] = 1;
        }
    }
}
int main(){
    cin >> n;
    for (int i = 1; i <= 2 * n + 1;i++){
        c[i] = d1[i] = d2[i] = 1;
    }
    tri(1);
    return 0;
}