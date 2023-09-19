#include<iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int a[100][100];
    for (int i = 1; i <= n;i++){
        for (int j = 1; j <= m;j++){
            cin >> a[i][j];
        }
    }
    int predix[n + 1][m + 1]={0};
    for (int i = 1; i <= n;i++){
        for (int j = 1; j <= m;j++){
            predix[i][j] = predix[i - 1][j] + predix[i][j - 1] - predix[i - 1][j - 1] + a[i][j];
        }
    }
    for (int i = 0; i <= n;i++){
        for (int j = 0; j <= m;j++){
           cout<< predix[i][j] << " ";
        }
        cout << endl;
    }
    int h1, h2, c1, c2;
    cin >> h1 >> h2 >> c1 >> c2;
    cout << predix[h2][c2] - predix[h1 - 1][c2] - predix[h2][c1 - 1] + predix[h1 - 1][c1 - 1] << endl;
    return 0;
}