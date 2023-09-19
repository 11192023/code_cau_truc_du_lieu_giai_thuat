#include<iostream>
using namespace std;
int cnt[1000] = {0};
int max(int a,int b){
    if(a>b)
        return a;
    return b;
}
int min(int a,int b){
    if(a<b)
        return a;
    return b;
}
void count_sort(int a[],int n){
    int ans = 0;
    int res = 0;
    for (int i = 0; i < n;i++){
        cnt[a[i]]++;
        ans = min(ans, a[i]);
        res = max(res, a[i]);
    }
    for (int i = ans; i <= res;i++){
        if(cnt[i]){
            for (int k = 0; k < cnt[i];k++){
                cout << i << " ";
            }
        }
    }
}
int main(){
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    count_sort(a, n);
    return 0;
}