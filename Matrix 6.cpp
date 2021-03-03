#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll t,n,a[100][100]; 
void Nhap()
{
    cin>>n;
    for(ll i = 0; i < n; i++)
    {
        for(ll j = 0; j < n; j++)
            cin>>a[i][j];
    }
}

void In()
{
    for(ll i = 0; i < n; i++)
    {
        for(ll j = 0; j < n; j++)
        {
            if(i == 0 || i == n-1 || j == 0 || j == n-1)
                cout<<a[i][j]<<" ";
            else 
                cout<<"  ";
        }
        cout<<endl;
    }
}

int main(){
    cin>>t;
    while(t--)
    {
        Nhap();
        In();
    }
}