#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll t, n, k, a[1001], b[1001];

void nhap(){
    cin>>n>>k;
    for(ll i = 0; i < n; i++)
        cin>>a[i];
}
void in(){
    ll sum, MIN = -1e6, p;
    for(ll i = 0; i < n-k+1; i++)
    {
        sum = 0;
        for(ll j = i; j < k+i; j++)
            sum +=a[j];
        if(sum > MIN)
        {
            p = 0;
            for(ll j = i; j < k+i; j++)
                b[p++] =a[j];
            MIN = sum;
        }
    }
    for(ll i = 0; i < p; i++)
        cout<<b[i]<<" ";
    cout<<endl;
}
int main(){
    cin>>t;
    while (t--)
    {
        nhap();
        in();
    }
    
}