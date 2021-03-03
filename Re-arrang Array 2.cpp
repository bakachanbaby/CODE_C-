#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void in(ll n, ll a[]){
    for(int i = 0; i < n; i++)
    {
        if(a[i] != 0)
        cout<<a[i]<<" ";
    }
    for(int i = 0; i < n; i++)
    {
        if(a[i] == 0)
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+5];
        for(int i = 0; i < n; i++)
            cin>>a[i];
        in(n, a);
    }
}