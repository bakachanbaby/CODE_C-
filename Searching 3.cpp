#include <bits/stdc++.h>
using namespace std;


void nhap(int n, int a[]){
    for(int i = 1; i < n; i++)
    {
        cin>>a[i];
    }
}
int in(int n, int a[]){
    for(int i = 1; i <= n; i++)
    {
        if(a[i] != i)
        return i;
    }
    return n+1;
}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+5];
        nhap(n, a);
        cout<<in(n, a)<<endl;
    }
}