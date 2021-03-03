#include <bits/stdc++.h>
using namespace std;

int t, m, s, a[1000];
void in()
{
    if (m == 1 && s == 0)
    {
        cout << 0 << " " << 0 << endl;
    }
    else if (s == 0 || s > m * 9)
        cout << -1 << " " << -1 << endl;
    else
    {
        int sum = s;
        for (int i = 1; i <= m; i++)
            a[i] = 0;
        for (int i = m; i >= 1; i--)
        {
            for (int j = 9; j >= 0; j--)
            {
                if (sum - j > 0)
                {
                    a[i] = j;
                    sum -= j;
                    break;
                }
                if (sum - j >= 0 && i == 1)
                {
                    a[i] = j;
                    sum -= j;
                    break;
                }
            }
        }
        for (int i = 1; i <= m; i++)
            cout << a[i];
        cout << " ";
        sum = s;
        for (int i = 1; i <= m; i++)
            a[i] = 0;
        for (int i = 1; i <= m; i++)
        {
            for (int j = 9; j >= 0; j--)
            {
                if (sum - j >= 0)
                {
                    a[i] = j;
                    sum -= j;
                    break;
                }
            }
        }
        for (int i = 1; i <= m; i++)
            cout << a[i];
    }
}
int main()
{
    cin >> m >> s;
    in();
}