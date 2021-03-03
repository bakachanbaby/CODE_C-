#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll t,n, k;

ll uocSo()
{
    ll j = 0;
    for(ll i = 2; i <= sqrt(n); i++)
    {
        if(n%i==0)
        {
            n/=i;
            j++;
        }
        if(n%i==0)
        return 0;
    }
    if(n!=1)
    j++;
    if(j == 3)
    return 1;
    return 0;
}

int main(){
    cin>>t;
    while(t--)
    {
        cin>>n;
        k = uocSo();
        if(k)
        cout<<"1"<<endl;
        else
        cout<<"0"<<endl;
    }
}