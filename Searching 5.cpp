#include <bits/stdc++.h>
using namespace std;
int t, n, a[10000001];
void nhap(){
    cin>>n;
    for(int i = 0;i < n; i++)
        cin>>a[i];
}
void in(){
    sort(a, a+n);
    int mx1 = a[0], mx2 = -1;
    for(int i = 0; i < n; i++)
    {
        if(mx1 != a[i])
        {
            mx2 = a[i];
            break;
        }
    }
    if(mx2 == -1)
    cout<<-1<<endl;
    else 
    cout<<mx1<<" "<<mx2<<endl;
}
int main(){
    cin>>t;
    while(t--)
    {
        nhap();
        in();
    }
}