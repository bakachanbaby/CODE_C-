#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll t, n;

ll uocSo(ll n)
{
    for(ll i = 2; i <= sqrt(n); i++)
    {
        if(n%i==0)
        {
            return i;
        }
    }
    return n;
}

void in()
{
    cout<<"1 ";
    for(ll i = 2; i <= n; i++)
    {
        cout<<uocSo(i)<<" ";
    }
    cout<<endl;
}

int main(){
    cin>>t;
    while(t--)
    {
        cin>>n;
        in();
    }
}