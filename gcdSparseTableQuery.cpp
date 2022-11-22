#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pint pair<int, int>
#define pll pair<ll, ll>
#define mk(a, b) make_pair(a, b)
#define pr(n) printf("%d\n", n)
#define sc(n) scanf ("%d", &n)
#define scll(n) scanf ("%lld", &n)
#define prll(n) printf("%lld\n", n)
#define MOD 1000000007ll

int n, q;
int arr[100000];
int table[100000][16+1];  // 2^16 > 10e5
int k = 16;

void buildTable () {
	int i;
	for (i = 0; i < n; i++) {
		table[i][0] = arr[i];
	}
	int j;
	for (j = 1; j <= k; j++) {
		for (i = 0; i <= n-(1<<j); i++) {
			table[i][j] = __gcd(table[i][j-1] , table[i+(1<<(j-1))][j-1]);
		}
	}
	return ;
}

int query(int l, int r) {
	int i, gc = 0;
	for (i = k; i >= 0; i--) {
		if (l+(1<<i)-1 <= r) {
      gc = __gcd (gc, table[l][i]);
			l = l + (1<<i);
		}
	}
	return gc;
}

int main (void) {
	sc(n);
	int i;
	for (i = 0; i < n; i++) {
		sc(arr[i]);
	}
	buildTable();
	sc(q);
	int l, r;
	while (q--) {
		sc(l), sc(r);
		pr(query(l,r));
	}
	return 0;
}