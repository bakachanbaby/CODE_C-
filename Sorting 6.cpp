#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll x, n, a[1000];

void nhap()
{
    cin>>n;
    for(ll i = 0; i < n; i++)
        cin>>a[i];
}

void in()
{
    sort(a, a+n);
    for(ll i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    cin>>x;
    while(x--)
    {
        nhap();
        in();
    }
}