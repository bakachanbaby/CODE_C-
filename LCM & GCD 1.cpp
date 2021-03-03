#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
ll t, a, b;

ll ucln(){
    return __gcd(a, b);
}
ll bcnn(){
    return a*b/(ucln());
}
int main(){
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        cout<<bcnn()<<" "<<ucln()<<endl;
    }
}