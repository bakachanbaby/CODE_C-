#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
ll t, n, a[100], b[1000];
void nhap()
{
    for(ll i = 0; i < n; i++)
        cin>>b[i];
}
ll fi(ll p)
{
    for(ll i = 0; i <= 16; i++)
    {
        if(p == a[i])
            return 1;
    }
    return 0;
}
void in()
{
    for(ll i = 0; i < n; i++)
    {
        if(fi(b[i]))
        cout<<b[i]<<" ";
    }
    cout<<endl;
}

int main(){
    cin>>t;
    a[0] = 0;
    a[1] = 1;
    for(int i = 2; i <= 16; i++)
        a[i] = a[i-1]+a[i-2];
    while (t--)
    {
        cin>>n;
        nhap();
        in();
    }
    
}