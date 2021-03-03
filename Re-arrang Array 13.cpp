#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll t, n, m, a[1000001], b[1000001], c[1000001];
void nhap(){
    cin>>n>>m;
    for(ll i = 0; i < n; i++)
        cin>>a[i];
    for(ll i = 0; i < m; i++)
        cin>>b[i];
}
void in(){
    sort(a, a+n);
    ll x = a[0]-1;
    for(ll i = 0; i < m; i++)
    {
        for(ll j = 0; j < n; j++)
        {
            if(b[i] == a[j])
            {
                cout<<a[j]<<" ";
                a[j] = x;
            }
            else if(b[i] < a[j])
                break;
        }
    }
    for(ll i = 0; i < n; i++)
    {
        if(a[i] != x)
        cout<<a[i]<<" ";
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