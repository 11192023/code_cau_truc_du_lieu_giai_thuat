#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    srand(static_cast<unsigned int>(time(nullptr)));
    int generate[n];
    int count = 0;
    while(count<n){
        int random = rand() % 1000000 + 1;
        bool isunique = true;
        for (int i = 0; i < count;i++){
            if(generate[i]==random){
                isunique = false;
                break;
            }
        }
        if(isunique){
            generate[count] = random;
            count++;
        }
    }
    for (int i = 0; i < n;i++){
        cout << generate[i] << " ";
    }
    return 0;
}