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
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        bool flag = true;
        map<int, int> cnt;
        for (int i = 0, j = n - 1; i <= j; i++, j--)
        {
            if (ar[i] != ar[j])
            {
                cnt[ar[i]]++;
                cnt[ar[j]]++;
                flag = false;
                break;
            }
        }

        if (flag)
            cout << "YES" << '\n';
        else
        {
            for (pair<int, int> target : cnt)
            {
                int l = 0, r = n - 1;
                flag = true;
                while (l < r)
                {
                    if (ar[l] == ar[r])
                    {
                        l++;
                        r--;
                    }
                    else if (ar[l] == target.first)
                    {
                        l++;
                    }
                    else if (ar[r] == target.first)
                    {
                        r--;
                    }
                    else
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag)
                {
                    break;
                }
            }

            if (flag)
                cout << "YES" << '\n';
            else
                cout << "NO" << '\n';
        }
    }

    return 0;
}