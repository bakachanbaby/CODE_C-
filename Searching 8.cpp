#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll t, a[1000], n, k;

void nhap()
{
    cin>>n>>k;
    for(ll i = 0; i < n; i++)
        cin>>a[i];
}

void in()
{
    ll count = 1;
    for(ll i = 0; i < n-1; i++)
    {
        if(a[i] == k && a[i] == a[i+1])
        {
            count++;
        }
    }
    if(count != 1)
    cout<<count<<endl;
    else 
    cout<<"-1"<<endl;
}

int main(){
    cin>>t;
    while(t--)
    {
        nhap();
        in();
    }
}   