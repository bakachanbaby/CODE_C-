#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

string s;

void in()
{
    ll c = s.size();
    ll sum1 = 0, sum2 = 0;
    for(ll i = 0; i < c; i+=2)
        sum1+=(s[i]-'0');
    for(ll i = 1; i < c; i+=2)
        sum2+=(s[i]-'0');
    ll sum = sum1-sum2;
    if(sum%11==0)
    cout<<"1"<<endl;
    else
    cout<<"0"<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        cin>>s;
        in();
    }
}