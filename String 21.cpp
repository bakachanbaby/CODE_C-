#include <bits/stdc++.h>
using namespace std;

int n;
string a;
void nhap()
{
    cin >> a;
}
void in()
{
    string c = "";
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
            c = c + a[i];
    }
    sort(c.begin(), c.end());
    long long sum = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] >= '0' && a[i] <= '9')
        {
            sum += a[i] - '0';
        }
    }
    ostringstream d;
    d << sum;
    string e = d.str();
    c = c + e;
    cout << c << endl;
}
int main()
{
    cin >> n;
    cin.ignore();
    while (n--)
    {
        nhap();
        in();
    }
}