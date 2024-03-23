/*https://atcoder.jp/contests/abc124/submissions/me*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y, coins = 0;
    cin >> x >> y;
    int z = 2;
    while (z--)
    {
        if (x > y)
        {
            coins += x;
            x--;
        }
        else
        {
            coins += y;
            y--;
        }
    }

    cout << coins << "\n";

    return 0;
}