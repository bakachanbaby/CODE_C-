#include <bits/stdc++.h>
using namespace std;

int t, n, a[1001];
void nhap(){
    cin>>n;
    for(int i = 0; i < n; i++)
        cin>>a[i];
}
void in(){
    int c=0,d=1, mx = abs(a[0]+a[1]);
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(mx > abs(a[i]+a[j]))
            {
                mx = abs(a[i]+a[j]);
                c = i;
                d = j;
            }
        }
    }
    cout<<a[c]+a[d]<<endl;
}
int main(){
    cin>>t;
    while(t--)
    {
        nhap();
        in();
    }
}