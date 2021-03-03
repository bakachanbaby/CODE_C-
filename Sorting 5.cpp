#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll t, n, m, a[100001], b[100001], d[100001];

void nhap(){
    cin>>n>>m;
    for(ll i = 0; i <= 100000; i++)
        d[i] = 0;
    for(ll i =0; i < n; i++)
    {
        cin>>a[i];
        d[a[i]]++;
    }
    for(ll i = 0; i < m; i++)
    {
        cin>>b[i];
        d[b[i]]++;
    }
}

void in(){
    for(ll i = 0; i <= 100000; i++)
    {
        if(d[i] >= 1)
        cout<<i<<" ";
    }
    cout<<endl;
    for(ll i = 0; i <= 100000; i++)
    {
        if(d[i] > 1)
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){
    cin>>t;
    while (t--)
    {
        nhap();
        in();
    }
    
}