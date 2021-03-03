#include <bits/stdc++.h>

using namespace std;
int t,n,m,a[100][100], b[100][100];
void nhap(){
    cin>>n>>m;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin>>a[i][j];
            b[i][j] = a[i][j];
        }   
            
    }
}
void in(){
    for(int i = 0; i < n; i++)
    {
        for(int j =0; j< m; j++)
        {
            if(a[i][j] == 1)
            {
                for(int k = 0; k < n; k++)
                    b[k][j] = 1;
                for(int l = 0; l < m; l++)
                    b[i][l] = 1;
            }
        }
    }
}
void xuat(){
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            cout<<b[i][j]<<" ";
        cout<<endl;
    }
}
int main(){
    cin>>t;
    while(t--)
    {
        nhap();
        in();
        xuat();
    }
}