#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n >> x;

    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    sort(ar, ar + n);

    int y = ar[0] + ar[1] + ar[2];
    
    if (y == x)
    {
        cout << y << '\n';
    }
    else
        cout << "IMPOSSIBLE" << '\n';


    return 0;
}