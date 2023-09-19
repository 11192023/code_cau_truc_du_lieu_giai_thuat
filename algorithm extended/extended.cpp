#include<iostream>
using namespace std;
int x, y, d;
void extended(int a,int b){
    if(b==0){
        x = 1;
        y = 0;
        d = a;
    }else{
        extended(b, a % b);
        int tmp = x;
        x = y;
        y = tmp - (a / b) * y;
    }
}
void inverse1(int a,int m){
    extended(a, m);
    if(d!=1){
        cout << "invalid!";
    }else{
        cout << (x % m + m) % m << endl;
    }
}
int bin_pow(int a,int b,int m){
    int res = 1;
    a %= m;
    while(b){
        if(b%2==1){
            res *= a;
            res %= m;
        }
        a *= a;
        a %= m;
        b /= 2;
    }
    return res;
}
void inverse2(int a,int m){
    cout << bin_pow(a, m - 2, m) << endl;
}
int a[101][101];
void init(){
    for (int i = 0; i <= 100;i++){
        for (int j = 0; j <= i;j++){
            if(j==0&&j==i){
                a[i][j] = 1;
            }else{
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
            }
        }
    }
}
int b[101];
void init1(){
    b[0] = 0;
    b[1] = 1;
    for (int i = 2; i <= 100;i++){
        b[i] = b[i - 1] + b[i - 2];
    }
}
void multiple(int a[2][2],int b[2][2]){
    int res[2][2];
    for (int i = 0; i < 2;i++){
        for (int j = 0; j < 2;j++){
            res[i][j] = 0;
            for (int k = 0; k < 2;k++){
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (int i = 0; i < 2;i++){
        for (int j = 0; j < 2;j++){
            a[i][j] = res[i][j];
        }
    }
}
void fibonansi(int n){
    int res[2][2] = {{1, 0}, {0, 1}};
    int a[2][2] = {{1, 1}, {1, 0}};
    while(n){
        if(n%2==1){
            multiple(res, a);
        }
        multiple(a, a);
        n /= 2;
    }
    cout << res[1][0] << endl;
}
int c[101];
void factorial(){
    c[0] = 1;
    for (int i = 1; i <= 100;i++){
        c[i] = c[i - 1] * i;
    }
}
int main(){
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    for (int i = 0; i < n;i++){
        cout << a[i] << " ";
    }
        return 0;
}