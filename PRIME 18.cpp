#include <bits/stdc++.h>
using namespace std;

int t, m, n, a, b;
void in(){
    int dem = 0;
    for(int i = m; i <= n; i++)
    {
        if(i % a == 0 || i % b == 0)
            dem++;
    }
    cout<<dem<<endl;
}
int main(){
    cin>>t;
    while(t--)
    {
        cin>>m>>n>>a>>b;
        in();
    }
}