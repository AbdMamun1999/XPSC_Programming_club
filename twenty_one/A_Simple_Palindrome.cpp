#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<char>ch;
        for (int i = 1; i <= n; i++)
        {
            if(i%5==1) ch.push_back('a');
            else if(i%5==2) ch.push_back('e');
            else if(i%5==3) ch.push_back('i');
            else if(i%5==4) ch.push_back('o');
            else if(i%5==0) ch.push_back('u');
        }
        sort(ch.begin(),ch.end());

        for (auto val : ch)
        {
            cout << val;
        }
        
        
        cout << '\n';
    }
    
    
    return 0;
}