#include <bits/stdc++.h>
using namespace std;
int t, n, a[1001];
void nhap(){
    cin>>n;
    for(int i = 0; i < n; i++)
        cin>>a[i];
}
void in(){
    sort(a, a+n);
    int dem = 0;
    for(int i = 0; i < n-1; i++)
    {
        if(a[i+1]-a[i] > 1)
        dem += (a[i+1]-a[i]-1);
    }
    cout<<dem<<endl;
}
int main(){
    cin>>t;
    while(t--)
    {
        nhap();
        in();
    }
}