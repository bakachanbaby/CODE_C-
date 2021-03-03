#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a, b, arr[100001];

ll san(ll n)
{
    if(n < 2)
    return 0;
    for(ll i = 2; i <= sqrt(n); i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}
void in(){
    for(int i = a+1; i < b; i++)
    {
        if(san(i))
        cout<<i<<" ";
    }
}
int main(){
    cin>>a>>b;
    if(a > b)
    swap(a, b);
    in();
}