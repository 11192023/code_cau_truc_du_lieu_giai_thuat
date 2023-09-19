#include<bits/stdc++.h>
using namespace std;
bool check(){
    int n;
    cin >> n;
    int k, t;
    cin >> k >> t;
    int a[100];
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    multiset<int> s;
    for (int i = 0; i < k;i++){
        auto it = s.lower_bound(a[i] - t);
        if(it!=s.end()&&*it<=a[i]+t){
            return true;
        }
        s.insert(a[i]);
    }
    for (int i = k; i < n;i++){
        s.erase(s.find(a[i - k]));
        auto it = s.lower_bound(a[i] - t);
        if(it!=s.end()&&*it<=a[i]+t){
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