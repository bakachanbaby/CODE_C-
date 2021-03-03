#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
ll a, x, y;

void in()
{
    for(ll i = 0; i < __gcd(x, y); i++)
    {
        cout<<a;
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        cin>>a>>x>>y;
        in();
    }
}