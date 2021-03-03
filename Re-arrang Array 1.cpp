#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void in(ll n, ll a[]){
    int flat = 0;
    for(int i = 0; i < n; i++)
    {
        flat = 0;
        for(int j = 0; j < n; j++)
        {
            if(i == a[j])
            {
                cout<<a[j]<<" ";
                flat = 1;
                break;
            }
        }
        if(flat == 0)
        cout<<-1<<" ";
    }
    cout<<endl;
}
int main(){
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+5];
        for(int i = 0; i < n; i++)
            cin>>a[i];
        in(n, a);
    }
}