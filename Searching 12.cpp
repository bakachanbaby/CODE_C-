#include <bits/stdc++.h>
using namespace std;

int t, n, x, a[100001], b[100001];

void nhap(){
    cin>>n>>x;
    for(int i = 0; i <= 100000; i++)
        b[i] = 0;
    for(int i = 0; i < n; i++)
    {
       cin>>a[i];
       b[a[i]]++;
    }
}

int in(){
    for(int i = 0; i <= 100000; i++)
    {
        if(b[i])
        {
            if(b[abs(x-i)])
                return 1;
        }
    }
    return -1;
}
int main(){
    cin>>t;
    while (t--)
    {
        nhap();
        cout<<in()<<endl;
    }
}