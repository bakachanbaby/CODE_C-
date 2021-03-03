#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll t, n, a[1000001];
void nhap(){
    cin>>n;
    for(ll i = 0; i < n; i++)
        cin>>a[i];
}
void in(){
    ll x = 0, y = n-1;
    ll flat = 0;
    for(ll i = 0; i < n-1; i++)
    {
        for(ll j = i+1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                x = i;
                flat = 1;
                break;
            }
        }
        if(flat)
        break;
    }
    flat = 0;
    for(ll i = n-1; i > 0; i--)
    {
        for(ll j = i-1; j >=0; j--)
        {
            if(a[i] < a[j])
            {
                y = i; 
                flat = 1;
                break;
            }
        }
        if(flat)
        break;
    }
    cout<<x+1<<" "<<y+1<<endl;
}
int main(){
    cin>>t;
    while (t--)
    {
        nhap();
        in();
    }
    
}