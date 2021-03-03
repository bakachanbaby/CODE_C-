#include <bits/stdc++.h>
using namespace std;

int t, n, a[1000], b[1000];
void nhap(){
    cin>>n;
    for(int i = 0; i < n; i++)
        cin>>a[i];
}
void in(){
    int bmx;
    int mx = 1;
    b[0] = 1;
    for(int i = 1; i < n; i++)
    {
        bmx = 0;
        for(int j = 0; j < i; j++)
        {
            if(a[i] > a[j])
            bmx = max(bmx, b[j]);
        }
        b[i] = bmx+1;
        mx = max(mx, b[i]);
    }
    cout<<mx<<endl;
}
int main(){
    cin>>t;
    while (t--)
    {
        nhap();
        in();
    }
}   