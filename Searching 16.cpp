#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 1e6+5;
ll t, n1, n2, n3, a[N], b[N], c[N];
void nhap(){
    cin>>n1>>n2>>n3;
    for(ll i = 0; i < n1; i++)
        cin>>a[i];
    for(ll i = 0; i < n2; i++)
        cin>>b[i];
    for(ll i = 0; i < n3; i++)
        cin>>c[i];
}
void in(){
    ll x = 0, y = 0, z = 0, flat = 0;
    while(x < n1 && y <n2 && z < n3)
    {
        if(a[x] == b[y] && a[x] == c[z])
        {
            cout<<a[x]<<" ";
            flat = 1;
            x++, y++, z++;
        }
        else if (a[x] < b[y] || a[x] < c[z])
            x++;
        else if (b[y] < a[x] || b[y] < c[z])
            y++;
        else 
            z++;
    }
    if(flat)
    cout<<endl;
    else 
    cout<<-1<<endl;
}
int main(){
    cin>>t;
    while(t--)
    {
        nhap();
        in();
    }
}