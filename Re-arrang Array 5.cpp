#include <bits/stdc++.h>
using namespace std;

int t, n, a[1001];
void nhap(){
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
}
void in(){
    sort(a, a+n);
    int k = 0;
    for(int i = 0; i < n; i++)
    {
        if(i%2==0)
            cout<<a[n-k-1]<<" ";
        else 
            cout<<a[k++]<<" ";
    }
    cout<<endl;
}
int main(){
    cin>>t;
    while(t--)
    {
        nhap();
        in();
    }
}