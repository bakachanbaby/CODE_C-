#include <bits/stdc++.h>
using namespace std;

int t, n, a[1000001];
void nhap(){
    cin>>n;
    for(int i = 0; i < n; i++)
        cin>>a[i];
}
void in(){
    int flat = 1;
    for(int i = 1; i < n; i++)
    {
        for(int j = 0; j< i; j++)
        {
            if(a[i] == a[j])
            {
                cout<<a[i]<<endl;
                flat = 0;
                break;
            }
        }
        if(flat == 0)
        break;
    }
    if(flat)
    cout<<-1<<endl;
}
int main(){
    cin>>t;
    while(t--)
    {
        nhap();
        in();
    }
}