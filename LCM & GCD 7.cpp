#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll t, x, y, z, n;
ll BCNN(ll a, ll b)
{
    return (a*b)/__gcd(a, b);
}
ll in(){
    ll x1 = BCNN(x, y);
    ll x2 = BCNN(x1, z);
    ll k = pow(10, n-1);
    ll k1 = pow(10, n);
    if(x2 >=k1)
    return -1;
    else 
    {
        if(k%x2==0)
        return k;
        else 
        return (k/x2+1)*x2;
    }
}
int main(){
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>z>>n;
        cout<<in()<<endl;
    }
}