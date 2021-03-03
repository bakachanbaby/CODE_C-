#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
ll n;

ll NT(ll n)
{
    if(n < 2)
    return 0;
    for(ll i = 2; i <= sqrt(n); i++)
        if(n % i == 0)
        return 0;
    return 1;
}

void in(ll n)
{
    ll count = 0;
    for(ll i = 2; i*i <= n; i++)
    {
        if(NT(i))
        count++;
    }
    cout<<count<<endl;
}
int main(){
    ll x;
    cin>>x;
    while(x--)
    {
        ll n;
        cin>>n;
        in(n);
    }
}