#include <bits/stdc++.h>
using namespace std;

int t, n, a[100001], b[100001];
void nhap()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
        
}
void check()
{
        a[0] *= b[1];
        a[n - 1] *= b[n - 2];
        for(int i = 1; i < n-1; i++)
        {
            a[i] = b[i-1]*b[i+1];
        }
}
void in(){
    for(int i = 0; i < n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
int main(){
    cin>>t;
    while(t--)
    {
        nhap();
        if(n > 1)
        check();
        in();
    }
}