#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll x, n, a[1000000], k;

void Nhap()
{
    cin>>n>>k;
    for(ll i = 0; i < n; i++)
        cin>>a[i];
}

void In()
{
    for(ll i = 0; i < n; i++)
    {
        if(a[i] == k)
        {
            cout<<i+1<<endl;
        }
    }
}

int main(){
    cin>>x;
    while(x--)
    {
        Nhap();
        In();
    }
}