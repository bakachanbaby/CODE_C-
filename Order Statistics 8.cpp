#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void nhap(ll a[], ll n)
{
    for(ll i = 0; i < n; i++)
        cin>>a[i];
}

void in(ll a[], ll n)
{
    sort(a, a+n);
    cout<<a[n-1]<<endl;
}

int main(){
    int x;
    cin>>x;
    while(x--)
    {
        ll n;
        cin>>n;
        ll a[n];
        nhap(a, n);
        in(a, n);
    }
}