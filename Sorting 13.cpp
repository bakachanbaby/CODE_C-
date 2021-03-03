#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
ll x, n, m, a[1000000], b[1000000], c[1000000];
void Nhap()
{
    ll j = 0;
    cin>>n>>m;
    for(ll i = 0; i < n; i++)
    {
        cin>>a[i];
        c[j++] = a[i];
    }
    for(ll i = 0; i < m; i++)
    {
        cin>>b[i];
        c[j++] = b[i];
    }
}

void In()
{
    ll k = n+m;
    sort(c, c+k);
    for(ll i = 0; i < k; i++)
        cout<<c[i]<<" ";
    cout<<endl;
}

int main(){
    cin>>x;
    while(x--)
    {
        Nhap();
        In();
    }
}