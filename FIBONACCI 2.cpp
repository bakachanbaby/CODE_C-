#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
ll t, n, a[100];

ll in()
{
    for(ll i = 0; i <= 92; i++)
    {
        if(n == a[i])
        {
            return 1;
        }
    }
    return 0;
}

int main(){
    cin>>t;
    a[0] = 0;
    a[1] = 1;
    for(int i = 2; i <= 92; i++)
        a[i] = a[i-1]+a[i-2];
    while (t--)
    {
        cin>>n;
        if(in())
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
    
}