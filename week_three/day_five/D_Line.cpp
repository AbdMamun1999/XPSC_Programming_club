#include <bits/stdc++.h>
#define ll long long
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
        string s;
        cin >> s;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
                sum += i;
            else if (s[i] == 'R')
            {
                sum += (n - i - 1);
            }
        }

        // cout << sum << " ";

        vector<int> v;
        int l = 0, r = n - 1;
        while (l < r)
        {
            if (s[l] == 'L')
            {
                int L = l;
                int R = n - l - 1;
                int mx = (L, R);
                // int dif = n-r;
                int dif = l;
                v.push_back(R - l);
                // cout << dif << " ";
            }
            else if (s[l] == 'R')
            {
                v.push_back(0);
            }

            if (s[r] == 'R')
            {
                int R = n - r;
                int L = r;
                int dif = n - r - 1;
                v.push_back(L - dif);
            }
            else
            {
                v.push_back(0);
            }

            l++;
            r--;
        }

        // for (int val : v)
        // {
        //     // sum += val;
        //     // cout << sum << " ";
        //     cout << val << " ";
        // }

        if (v.empty())
            cout << 0;
        else
        {
            sort(v.begin(), v.end(), greater<int>());
            for (int val : v)
            {
                sum += val;
                cout << sum << " ";
            }

            for (int i = v.size(); i < n; i++)
            {
                cout << sum << " ";
            }
        }

        cout << '\n';
    }

    return 0;
}