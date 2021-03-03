#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll t, n, a[1000001];

void san(){
    for(ll i = 0; i <= n; i++)
        a[i] = 0;
    for(ll i = 2; i <= sqrt(n); i++)
    {
        for(ll j = i*2; j <= n; j+=i)
        {
            if(a[i] == 0)
                a[j] = 1;
        }
    }
}
void in(){
    for(ll i = 2; i <=sqrt(n); i++)
    {
        if(a[i] == 0)
        cout<<i*i<<" ";
    }
    cout<<endl;
}
int main(){
    cin>>t;
    while(t--)
    {
        cin>>n;
        san();
        in();
    }
}