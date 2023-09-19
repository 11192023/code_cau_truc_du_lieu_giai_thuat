#include<bits/stdc++.h>
using namespace std;
int partition(int a[],int l,int r){
    int p = a[l];
    int i = l - 1;
    int j = r + 1;
    while(1){
        do{
            i++;
        } while (a[i] < p);
        do
        {
            j--;
        } while (a[j] > p);
        if (i < j)
        {
            swap(a[i], a[j]);
        }
        else
        {
            return j;
        }
    }
}
void quick_sort(int a[],int l,int r){
    if(l>=r)
        return;
    int p = partition(a, l, r);
    quick_sort(a, l, p);
    quick_sort(a, p + 1, r);
}
int main(){
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    quick_sort(a, 0, n - 1);
    for (int i = 0; i < n;i++){
        cout << a[i] << " ";
    }
    return 0;
}