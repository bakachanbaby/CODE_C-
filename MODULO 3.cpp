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
    cout<<sum<<endl;
}
int main(){
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        tong();
    }
}