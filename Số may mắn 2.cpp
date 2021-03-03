#include <bits/stdc++.h>
using namespace std;

void in(string s)
{
    long long sum = 0;
    for(long long i = 0; i < s.size(); i++)
    {
        sum += (s[i] - '0');
    }
    if(sum % 9 == 0 && sum != 0)
    cout<<1<<endl;
    else 
    cout<<0<<endl;
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        cin >> s;
        in(s);
    }
}   