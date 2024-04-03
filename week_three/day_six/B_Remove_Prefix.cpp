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

        bool visited[n + 1] = {0};
        set<int> s;
        for (int j = n - 1; j >= 0; j--)
        {
            if (!visited[ar[j]])
            {

                s.insert(ar[j]);
                visited[ar[j]] = true;
            }
            else
                break;
        }

        cout << n - s.size() << '\n';
    }

    return 0;
}