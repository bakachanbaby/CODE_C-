#include <bits/stdc++.h>
using namespace std;
int t, n, a[1001];
void nhap(){
    for(int i = 0; i < n; i++)
        cin>>a[i];
}
void in(){
    int MIN = abs(a[0]-a[1]);
    for(int i = 0; i < n-1; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            MIN = min(MIN, abs(a[i]-a[j]));
        }
    }
    cout<<MIN<<endl;
}
int main(){
    cin>>t;
    while(t--)
    {
        cin>>n;
        nhap();
        in();
    }
}