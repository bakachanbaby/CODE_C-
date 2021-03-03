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
    sort(a, a+n);
    for(ll i = n-1; i > n-1-k; i--)
        cout<<a[i]<<" ";
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