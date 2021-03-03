#include <bits/stdc++.h>
using namespace std;
int t, n, k, a[1000001];

void nhap()
{
    cin>>n>>k;
    for(int i = 0; i < n*n; i++)
        cin>>a[i];
}
void in(){
    n*=n;
    sort(a, a+n);
    k--;
    cout<<a[k]<<endl;
}
int main(){
    cin>>t;
    while (t--)
    {
        nhap();
        in();
    }
    
}