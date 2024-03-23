/*https://codeforces.com/contest/1722/problem/A*/
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
        string name = "Timur";
        sort(name.begin(), name.end());

        int n;
        cin >> n;
        string s1;
        cin >> s1;
        sort(s1.begin(), s1.end());

        if (name == s1)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}