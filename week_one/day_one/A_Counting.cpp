/*https://atcoder.jp/contests/abc209/tasks/abc209_a*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;
    if (a < b)
    {
        cout << b - a + 1 << "\n";
    }
    else
    {
        cout << 0 << "\n";
    }

    return 0;
}