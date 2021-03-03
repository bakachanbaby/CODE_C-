#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
ll t, a, m;
ll nhan(ll x, ll a, ll m){
    return x*a%m;
}
ll in(){
    for(int i = 0; i < m; i++)
    {
        if(nhan(i, a, m) == 1)
            return i;
    }
    return -1;
}
int main(){
    cin>>t;
    while(t--)
    {
        cin>>a>>m;
        cout<<in()<<endl;
    }
}