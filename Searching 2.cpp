#include <bits/stdc++.h>
using namespace std;

int t, n, x, a[1000005];
void nhap(){
    cin>>n>>x;
    for(int i = 0; i < n; i++)
        cin>>a[i];
}
int tk()
{
    int l = 0, r = n-1;
    while(l <= r)
    {
        int mid = (r+l)/2;
        if(a[mid] == x)
        return 1;
        if(a[mid] > x)
        r = mid-1;
        if(a[mid] < x)
        l = mid+1;
    }
    return -1;
}
int main(){
    cin>>t;
    while(t--)
    {
        nhap();
        cout<<tk()<<endl;
    }
}