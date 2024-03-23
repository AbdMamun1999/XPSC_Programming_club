/*https://atcoder.jp/contests/abc125/submissions/me*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, t;
    cin >> a >> b >> t;

    int x = t / a * b;
    cout << x << endl;

    return 0;
}