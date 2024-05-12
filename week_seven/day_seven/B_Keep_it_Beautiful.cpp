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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        bool is_br = false;
        string s(n, '0');
        bool flag = false;
        int mx;

        s[0] = '1';
        mx = v[0];
        for (int i = 1; i < n; i++)
        {
            if (!flag)
            {
                if (v[i] >= mx)
                {
                    s[i] = '1';
                    mx = v[i];
                }
                else if (v[0] >= v[i])
                {
                    flag = true;
                    s[i] = '1';
                    mx = v[i];
                }
            }
            else
            {
                if (v[i] >= mx && v[i] <= v[0])
                {
                    s[i] = '1';
                    mx = v[i];
                }
            }
        }

        cout << s << '\n';
    }

    return 0;
}