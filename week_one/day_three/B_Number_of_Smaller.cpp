/*https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/B*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    int a[n], b[m];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int r = 0, l = 0, ans = 0;
    while (r < m)
    {
        while (b[r] > a[l] && l < n)
        {
            ans++;
            l++;
        }
        r++;
        cout << ans << " ";
    }

    return 0;
}