#include <bits/stdc++.h>
using namespace std;

int t, n;
int uoc(int n)
{
    if(n == 1)
    return 1;
    for(int i = 2; i <=sqrt(n); i++)
    {
        if(n%i==0)
        return i;
    }
    return n;
}
void in(){
    for(int i = 1; i <= n; i++)
    {
        cout<<uoc(i)<<" ";
    }
    cout<<endl;
}
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        in();
    }
}