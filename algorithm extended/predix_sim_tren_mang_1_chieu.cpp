#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[100];
    for (int i = 1; i <=n;i++){
        cin >> a[i];
    }
    int predix[n + 1]={0};
    for (int i = 1; i <= n;i++){
        predix[i] = predix[i - 1] + a[i];
    }
    int l, r;
    cin >> l >> r;
    cout << predix[r] - predix[l - 1] << endl;
    return 0;
}