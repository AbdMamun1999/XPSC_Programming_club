#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
    cin >> n >> m;
    string a,b;
    cin >> a;

    cout << n << m << endl;

    set<int>st;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        x--;
        st.insert(x);
    }

    cin >> b;
    sort(b.begin(),b.end());

    int ind = 0;
    for (auto it : st)
    {
        a[it]= b[ind];
        ind++;
    }
    
    cout << a << '\n';
    }
    
    
    return 0;
}