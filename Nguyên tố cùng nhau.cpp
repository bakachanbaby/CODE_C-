#include <bits/stdc++.h>
using namespace std;

int t, x;
int NT(int n)
{
    if(n <2)
    return 0;
    for(int i = 2; i <=sqrt(n); i++)
        if(n%i==0)
        return 0;
    return 1;
}
void in(){
    int dem = 1;
    for(int i = 2; i < x; i++)
    {
        if(__gcd(i, x) == 1)
        dem++;
    }
    if(NT(dem))
    cout<<1<<endl;
    else
    cout<<0<<endl;
}
int main(){
    cin>>t;
    while(t--)
    {
        cin>>x;
        in();
    }
}