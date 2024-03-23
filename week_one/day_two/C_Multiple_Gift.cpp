/*https://atcoder.jp/contests/abc083/submissions/me*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long int x, y;
    cin >> x >> y;

    int i = 1;
    while (x <= y)
    {
        x  *= i;
        i++;
        // cout << x << " ";
    }
    cout << i << "\n";

    return 0;
}