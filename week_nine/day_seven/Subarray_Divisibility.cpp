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

    map<int, int> mp;
    mp[0] = 1;
    int cnt = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += ar[i];
    }

    return 0;
}