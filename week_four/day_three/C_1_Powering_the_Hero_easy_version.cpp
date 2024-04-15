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
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        priority_queue<int> pq;
        ll res = 0;
        for (int i = 0; i < n; i++)
        {
            if (ar[i] == 0)
            {
                if (!pq.empty())
                {
                    res += pq.top();
                    pq.pop();
                }
            }
            else
                pq.push(ar[i]);
        }

        cout << res << '\n';
    }

    return 0;
}