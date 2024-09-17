// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
 
    
//     return 0;
// }


// void solve() {
// 	scanf("%d%s", &n, s + 1);
// 	for (int i = 0; i < 26; ++i) {
// 		a[i] = mkp(0, i);
// 	}
// 	for (int i = 1; i <= n; ++i) {
// 		++a[s[i] - 'a'].fst;
// 	}
// 	sort(a, a + 26, greater<pii>());
// 	queue<pii> q;
// 	while (a[0].fst > a[1].fst) {
// 		putchar('a' + a[0].scd);
// 		--a[0].fst;
// 	}
// 	for (int i = 0; i < 26; ++i) {
// 		q.push(a[i]);
// 	}
// 	while (q.size()) {
// 		// pii p = q.front();
// 		q.pop();
// 		if (!p.fst) {
// 			continue;
// 		}
// 		putchar('a' + p.scd);
// 		--p.fst;
// 		q.push(p);
// 	}
// 	putchar('\n');
// }
