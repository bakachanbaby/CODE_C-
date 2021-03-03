#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
ll t, n, a[10000], k, x;
void in(){
    ll s = n, k = 0;
    for(ll i = 2; i <=sqrt(n); i++)
    {
        while(s % i == 0)
        {
            a[k++] = i;
            s/=i;
        }
    }
    if(s > 1)
    a[k++] = s;
    if(x <= k)
    cout<<a[x-1]<<endl;
    else 
    cout<<-1<<endl;
}
int main(){
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        in();
    }
}