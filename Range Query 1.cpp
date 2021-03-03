#include <bits/stdc++.h>
using namespace std;
int t, n, q, a[10001], b[20001], sum;
void nhap(){
    cin>>n>>q;
    for(int i = 0;i < n; i++)
        cin>>a[i];
    for(int i = 0;i < q*2; i++)
        cin>>b[i];
}
void in(){
    for(int i = 0; i < q*2; i+=2)
    {
        sum = 0;
        for(int j = b[i]-1; j <= b[i+1]-1; j++)
        {   
            sum+=a[j];
        }
        cout<<sum<<endl;
    }
}
int main(){
    cin>>t;
    while(t--)
    {
        nhap();
        in();
    }
}