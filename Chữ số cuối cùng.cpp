#include <bits/stdc++.h>
using namespace std;

int t, n;

int last(int n)
{
    int sum = 0;
    while(n)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}
void in(){
    while(n)
    {
        n = last(n);
        if(n >= 0 && n <= 9)
        {
            break;
        }
    }
    cout<<n<<endl;
}
int main(){
    cin>>t;
    while(t--)
    {
        cin>>n;
        in();
    }
}