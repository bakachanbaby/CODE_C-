#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void in(ll n, ll m, ll a[]){
    sort(a, a+(n*m));
    for(int i = 0; i < (n*m); i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
int main(){
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, m;
        cin>>n>>m;
        ll a[n*m+5];
        for(int i = 0; i < n*m; i++)
            cin>>a[i];
        in(n, m, a);
    }
}