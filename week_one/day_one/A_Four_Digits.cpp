/*https://atcoder.jp/contests/abc222/tasks/abc222_a*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int x = 4;
    vector<int> v;
    while (x--)
    {
        v.push_back(n % 10);
        n = n / 10;
    }
    reverse(v.begin(), v.end());
    for (auto val : v)
    {
        cout << val;
    }

    return 0;
}