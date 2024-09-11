#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v;

    int val = 0;
    for (int i = 1; i <= 9; i++)
    {
        val = val * 10 + 1;
        for (int j = 1; j <= 9; j++)
        {
            v.push_back(val * j);
        }
    }

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = 0;
        for (int i = 0; i < v.size(); i++)
        {

            if (v[i] <= n)
                ans++;
            else
                break;
        }

        cout << ans << '\n';
    }

    return 0;
}