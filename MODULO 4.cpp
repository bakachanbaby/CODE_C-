#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
ll t, n, k;
void tong(){
    ll sum = 0;
    for(int i = 1; i <= n; i++)
    {
        sum += i%k;
    }
    if(sum == k)
    cout<<1<<endl;
    else 
    cout<<0<<endl;
}
int main(){
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        tong();
    }
}