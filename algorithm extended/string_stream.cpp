#include<iostream>
#include<sstream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void check(string &s){
    s[0] = toupper(s[0]);
    for (int i = 1; i < s.size();i++){
        s[i] = tolower(s[i]);
    }
}
int main(){
    string s;
    getline(cin, s);
    string token;
    stringstream ss(s);
    vector<string> v;
    while(ss>>token){
        v.push_back(token);
    }
    for (int i = 0; i < v.size();i++){
        check(v[i]);
    }
    for (int i = 0; i < s.size();i++){
        cout << v[i] << " ";
    }
    return 0;
}