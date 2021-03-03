#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll t, n, a[1001];
ll Mo = 1e9+7;
void fi()
{
    a[0] = 0, a[1] = 1, a[2] = 1;
    for(int i = 3; i <= 1000; i++)
    {
        a[i] = a[i-1]+a[i-2];
        if(a[i] > Mo)
            a[i]-=Mo;
    }
    
}
int main(){
    cin>>t;
    fi();
    while(t--)
    {
        cin>>n;
        cout<<a[n]<<endl;
    }
}