#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
ll t, n, a[10000], k;
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
    cout<<a[k-1]<<endl;
}
int main(){
    cin>>t;
    while(t--)
    {
        cin>>n;
        in();
    }
}