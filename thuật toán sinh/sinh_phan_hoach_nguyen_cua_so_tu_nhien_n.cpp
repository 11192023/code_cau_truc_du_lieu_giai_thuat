#include<iostream>
using namespace std;
int n, a[100], ok, cnt;
void kt(){
    cnt = 1;
    a[1] = n;
}
void regenerate(){
    int i = cnt;
    while(i>=1&&a[i]==1){
        i--;
    }
    if(i==0){
        ok = 0;
    }
    else{
        a[i]--;
        int d = cnt - i + 1;
        cnt = i;
        int q = d / a[i];
        int p = d % a[i];
        if(q){
            for (int j = 0; j < q;j++){
                cnt++;
                a[cnt] = a[i];
            }
        }if(p){
            cnt++;
            a[cnt] = p;
        }
    }
}
int main(){
    cin >> n;
    ok = 1;
    kt();
    while(ok){
        for (int i = 1; i <= cnt;i++){
            cout << a[i]<<" ";
        }
        cout << endl;
        regenerate();
    }
    return 0;
}