#include <bits/stdc++.h>
using namespace std;
int t, n, m, a[100][100], b[100][100];
void nhap()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            b[i][j] = a[i][j];
        }
    }
}
void TrenPhai(int x, int y, int z, int p);
void DuoiTrai(int x, int y, int z, int p);

void TrenPhai(int x, int y, int z, int p)
{
    for (int i = x + 1; i < p; i++) //1 2 3 0 1 2
    {
        a[x][i] = b[x][i - 1];
    }
    for (int i = y + 1; i < z; i++) // 1 2 3 4 5 a[1][j] a[2][j]
    {
        a[i][p - 1] = b[i - 1][p - 1];
    }
    if (p - x > 0 && z - y > 0)
    {
        x++, z--, p--;
        DuoiTrai(x, y, z, p);
    }
}
void DuoiTrai(int x, int y, int z, int p)
{
    for (int i = p - 1; i >= y; i--)
    {
        a[z][i] = b[z][i + 1];
    }
    for (int i = z - 1; i >= x - 1; i--)
    {
        a[i][y] = b[i + 1][y];
    }
    if (z - x > 0 && p - y > 0)
    {
        y++;
        TrenPhai(x, y, z, p);
    }
}
void xuat()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << a[i][j]<<" ";
    }
    cout<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        nhap();
        TrenPhai(0, 0, n, m);
        xuat();
    }
}