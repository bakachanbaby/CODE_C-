#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll pow(ll a, ll b, ll c)
{
    if (b == 1)
        return a;
    ll x = pow(a, b / 2, c);
    if (b % 2 == 0)
        return (x % c * x % c) % c;
    return (x %c * x % c * a % c) % c;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        cout << pow(a, b, c) << endl;
    }
}