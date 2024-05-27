#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n >> x;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back({ar[i], i + 1});
    }

    sort(v.begin(), v.end());

    int idx1 = -1, idx2 = -1, idx3 = -1;
    bool flag = false;
    for (int i = 0; i < n - 2; i++)
    {
        int l = i + 1, r = n - 1;
        while (l < r && l < n)
        {
            int sum = v[i].first + v[l].first + v[r].first;

            if (sum == x)
            {
                idx1 = v[i].second;
                idx2 = v[l].second;
                idx3 = v[r].second;
                flag = true;
                break;
            }
            else if (sum < x)
            {
                l++;
            }
            else
                r--;
        }

        if (flag)
            break;
    }

    if (flag)
        cout << idx1 << " " << idx2 << " " << idx3 << '\n';
    else
        cout << "IMPOSSIBLE" << '\n';

    return 0;
}