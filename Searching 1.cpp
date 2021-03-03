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
    int j = 0;
    for(ll i = 0; i < n; i++)
    {
        if(a[i] == k)
        {
            j = 1;
            cout<<i+1<<endl;
            break;
        }
    }
    if(j == 0)
        cout<<"-1"<<endl;
}

int main(){
    cin>>x;
    while(x--)
    {
        Nhap();
        In();
    }
}   