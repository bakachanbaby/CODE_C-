#include <bits/stdc++.h>
using namespace std;


int t, n, a[10000001], b[11];
void nhap()
{
    for (int i = 0; i < 10; i++)
        b[i] = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
}
void them(int a)
{
    while (a)
    {
        b[a % 10]++;
        a /= 10;
    }
}
void in()
{
    for (int i = 0; i < n; i++)
        them(a[i]);
    for (int i = 0; i < 10; i++)
    {
        if (b[i] != 0)
            cout << i << " ";
    }
    cout << endl;
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