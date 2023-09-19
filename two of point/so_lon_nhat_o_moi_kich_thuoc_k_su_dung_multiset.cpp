#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n>>k;
    int a[100];
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    multiset<int> s;
    for (int i = 0; i < k;i++){
        s.insert(a[i]);
    }
    cout << *s.rbegin() << " ";
    for (int i = k; i < n;i++){
        s.erase(s.find(a[i - k]));
        s.insert(a[i]);
        cout << *s.rbegin() << " ";
    }
    return 0;
}