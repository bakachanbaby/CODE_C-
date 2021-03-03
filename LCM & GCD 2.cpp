#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll t, n;
ll bcnn(ll a, ll b){
    return (a*b)/__gcd(a, b);
}
void in(){
    ll x = 1; 
    for(int i = 1; i <= n; i++)
    {
        x = bcnn(x, i);
    }
    cout<<x<<endl;
}
int main(){
    cin>>t;
    while(t--)
    {
        cin>>n;
        in();
    }
}