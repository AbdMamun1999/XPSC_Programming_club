#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        double n;
        cin >> n;
        int y = sqrt(n);

        double x = ceil(n / y);
        cout << (x - 1) + (y - 1) << '\n';
    }

    return 0;
}