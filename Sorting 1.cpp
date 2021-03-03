#include <bits/stdc++.h>
using namespace std;

int t, n, a[1001], b[1001];
void nhap(){
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
        b[i] = a[i];
    }
}
void in(){
    sort(a, a+n);
    sort(b, b+n);
    int k = 0;
    for(int i = 0; i < n; i++)
    {
        if(i%2==0)
        cout<<a[n-k-1]<<" ";
        else 
        cout<<b[k++]<<" ";
    }
    cout<<endl;
}
int main(){
    cin>>t;
    while(t--)
    {
        cin>>n;
        nhap();
        in();
    }
}