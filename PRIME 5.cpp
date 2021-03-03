#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll t, m, n, a[10001];

void taoMang()
{
    a[0] = 0;
    a[1] = 0;
    for(ll i = 2; i <= n; i++)
        a[i] = 1;
}

void sanMang()
{
    for(ll i = 2; i <= n; i++)
    {
        if(a[i])
        {
            for(ll j = i*2; j <= n; j+=i)
                a[j] = 0;
        }
    }
}

void in()
{
    for(ll i = m; i <= n; i++)
    {
        if(a[i])
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){
    cin>>t;
    while (t--)
    {
        cin>>m>>n;
        taoMang();
        sanMang();
        in();
    }
    
}