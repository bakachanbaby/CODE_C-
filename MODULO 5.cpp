#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll t, m;
string n;
void in(){
    ll sum = n[0]-'0';
    for(int i = 1; i < n.size(); i++)
    {
        sum = (sum*10+n[i]-'0')%m;
    }
    cout<<sum<<endl;
}
int main(){
    cin>>t;
    cin.ignore();
    while(t--)
    {
        cin>>n;
        cin>>m;
        in();
    }
}