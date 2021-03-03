#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void nhap(ll a[], ll n)
{
    for(ll i = 0; i < n; i++)
        cin>>a[i];
}

void in(ll a[], ll n, ll k)
{
    sort(a, a+n);
    k--;
    cout<<a[k]<<endl;
}

int main(){
    int x;
    cin>>x;
    while(x--)
    {
        ll n, k;
        cin>>n>>k;
        ll a[n];
        nhap(a, n);
        in(a, n, k);
    }
}