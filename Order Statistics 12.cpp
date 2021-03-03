#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void in(ll n, ll a[])
{
    int d=0;
    for(int i = 1; i <= n+1; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(a[j] == i)
            d = 1;
        }
        if(d == 0)
        {
            cout<<i<<endl;
            break;
        }
        d=0;
    }
}
int main(){
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+5];
        for(ll i = 0; i < n; i++)
        cin>>a[i];
        in(n, a);

    }
}