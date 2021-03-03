#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
ll t, n;
void in(){
    ll s = n, dem = 0, flat = 0;
    for(ll i = 2; i <=sqrt(n); i++)
    {
        dem = 0;
        while(s % i == 0)
        {
            dem++;
            s/=i;
        }
        if(dem > 0 && flat == 0)
        {
            cout<<i<<" "<<dem;
            flat = 1;
            continue;
        }
        if(dem > 0 && flat == 1)
        {
            cout<<" "<<i<<" "<<dem;
            continue;
        }
    }
    if(s > 1 && flat == 0)
    cout<<s<<" "<<1<<endl;
    else if(s > 1 && flat == 1)
    cout<<" "<<s<<" "<<1<<endl;
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