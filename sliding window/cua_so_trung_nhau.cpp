#include<bits/stdc++.h>
using namespace std;
bool check(){
    int n,k;
    cin >> n>>k;
    int a[100];
    set<int> s;
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    for (int i = 0; i < k;i++){
        if(s.count(a[i])){
            return true;
        }
        s.insert(a[i]);
    }
    for (int i = k; i < n;i++){
        s.erase(a[i - k]);
        if(s.count(a[i])){
            return true;
        }
        s.insert(a[i]);
    }
    return false;
}
int main(){
if(check()){
        cout << "yes";
}else{
        cout << "no";
}
    return 0;
}