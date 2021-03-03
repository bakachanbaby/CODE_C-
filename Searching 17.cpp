#include <bits/stdc++.h>
using namespace std;

int t, n, k, a[1000000];

void nhap()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];
}
void in()
{
    sort(a, a + n);
    cout << a[k - 1] << endl;
}
int main()
{
    cin >> t;
    while (t--)
    {
        nhap();
        in();
    }
}