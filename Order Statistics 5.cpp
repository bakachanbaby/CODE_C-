#include <bits/stdc++.h>
using namespace std;

int t, n, a[1000];

void Nhap(){
    cin>>n;
    for(int i = 0; i < n; i++)
        cin>>a[i];
    
}

void In(){
    int hieu, max = abs(a[0]-a[1]);
    int flat = 1;
    for(int i = 0; i < n-1; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            hieu = 0;
            if(a[i] <  a[j])
            {
                flat = 0;
                hieu = abs(a[i]-a[j]);
                if(hieu > max)
                   max = hieu;
            }
        }
    }
    if(flat)
    cout<<-1<<endl;
    else 
    cout<<max<<endl;
}

int main(){
    cin>>t;
    while (t--)
    {
        Nhap();
        In();
    }
    
}