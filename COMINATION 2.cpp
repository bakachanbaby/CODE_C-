#include <bits/stdc++.h>
using namespace std;

int t, n, k, a[20];
void in(){
    for(int i = 1; i <=k; i++)
    {
        cout<<a[i];
    }
    cout<<" ";
}
void check(int i){
    for(int j = a[i-1]+1; j <= n-k+i; j++)
    {
        a[i] = j;
        if(i == k)
        in();
        else 
        check(i+1);
    }
}
int main(){
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        check(1);
        cout<<endl;
    }
}