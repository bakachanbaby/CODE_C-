#include <bits/stdc++.h>
using namespace std;

int t, n;
int NT(int n)
{
    if(n < 2)
    return 0;
    for(int i = 2; i <=sqrt(n); i++)
        if(n%i==0)
        return 0;
    return 1;
}
void in(){
    for(int i = 2; i<n;i++)
    {
        if(NT(i) && NT(n-i))
        {
            cout<<i<<" "<<n-i<<endl;
            break;
        }
    }
}
int main(){
    cin>>t;
    while(t--)
    {
        cin>>n;
        in();
    }
}