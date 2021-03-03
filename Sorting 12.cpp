#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
ll x, n, m, a[1000], b[1001];
void Nhap()
{
    cin>>n>>m;
    for(ll i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for(ll i = 0; i < m; i++)
        cin>>b[i];
}

void In()
{
    sort(a, a+n);
    sort(b, b+n);
    cout<<(a[n-1]*b[0])<<endl;
}

int main(){
    cin>>x;
    while(x--)
    {
        Nhap();
        In();
    }
}