/*https://codeforces.com/edu/course/2/lesson/9/1/practice/status*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int r = 0, l = 0;
    vector<int> v;
    while (l < n && r < m)
    {
        if (a[l] > b[r])
        {
            v.push_back(b[r]);
            r++;
        }
        else
        {
            v.push_back(a[l]);
            l++;
        }
    }

    while (r < m)
    {
        v.push_back(b[r]);
        r++;
    }

    while (l < n)
    {
        v.push_back(a[l]);
        l++;
    }

    for (int val : v)
    {
        cout << val << " ";
    }

    return 0;
}