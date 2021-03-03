#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
ll t, n;
void in(){
    ll s = n;
    for(ll i = 2; i <=sqrt(n); i++)
    {
        while(s % i == 0)
        {
            cout<<i<<" ";
            s/=i;
        }
    }
    if(s > 1)
    cout<<s<<endl;
    else 
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