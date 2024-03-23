/*https://atcoder.jp/contests/abc220/tasks/abc220_a*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;

    int y = 0;
    bool flag = false;
    int idx;
    for (int i = 1; i <= 1000; i++)
    {
        int x = c * i;
        if (x >= a && x <= b)
        {
            flag = true;
            idx = i;
            break;
        }
        if (x > b)
            break;
    }

    if (flag)
        cout << idx * c << "\n";
    else
        cout << -1 << "\n";

    return 0;
}