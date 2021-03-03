#include <bits/stdc++.h>
using namespace std;

int t, n, a[1000001];
void nhap(){
    cin>>n;
    a[0] = 0;
    a[1] = 0;
    for(int i = 2; i <= n; i++)
        a[i] = 1;
}
void check(){
    for(int i = 2; i <= n; i++)
    {
        if(a[i])
        {
            for(int j = i*2; j <= n; j+=i)
                a[j] = 0;
        }
    }
}
void in(){
    int flat=1;
    for(int i = 2; i <= n; i++)
    {
        if(a[i])
        {
            if(a[n-i])
            {
                cout<<i<<" "<<n-i<<endl;
                flat = 0;
                break;
            }
        }
    }
    if(flat)
    cout<<-1<<endl;
}
int main(){
    cin>>t;
    while (t--)
    {
        nhap();
        check();
        in();
    }
    
}