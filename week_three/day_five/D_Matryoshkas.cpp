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

    set<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(ar[i]);
    }

    for (auto &&val : st)
    {
        cout << val << " ";
    }

    return 0;
}