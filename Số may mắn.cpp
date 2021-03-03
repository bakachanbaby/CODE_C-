#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
string s, x, y, z = " ";

void in()
{
    ll c = s.size();
    ll sum = (s[c-2]-'0')*10 +(s[c-1]-'0');
    if(sum == 86)
    cout<<"1"<<endl;
    else 
    cout<<"0"<<endl;
}

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        cin>>s;
        in();
    }
}