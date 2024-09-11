#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    vector<int> v1;
    int cnt_1 = 0, cnt_2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == 1)
        {
            cnt_1++;
            if (cnt_2 > 0)
            {
                v1.push_back(cnt_2);
                cnt_2 = 0;
            }
        }
        else if (ar[i] == 2)
        {
            cnt_2++;
            if (cnt_1 > 0)
            {
                v1.push_back(cnt_1);
                cnt_1 = 0;
            }
        }
    }

    v1.push_back(max(cnt_1, cnt_2));

    int ans = 0, res = 0;
    for (int i = 1; i < v1.size(); i++)
    {
        res = min(v1[i - 1], v1[i]);
        ans = max(ans, res);
    }

    cout << ans*2 << endl;

    return 0;
}