#include <bits/stdc++.h>
using namespace std;

int t, n, l, r, a[10000];
void nhap(){
    cin>>n;
    for(int i = 0 ; i < n; i++)
        cin>>a[i];
    cin>>l>>r;  
}
int in(){
    int dem = l, i, j;
    for(i = l; i < r; i++)
    {
        if(a[i] <= a[i+1])
        dem++;
        else 
        break;
    }
    for(j = i; j < r; j++)
    {
        if(a[j] >= a[j+1])
        dem++;
        else 
        break;
    }
    if(dem == r)
    return 1;
    return 0;
}

int main(){
    cin>>t;
    while (t--)
    {
        nhap();
        if(in())
        cout<<"Yes"<<endl;
        else 
        cout<<"No"<<endl;
    }
    
}