#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nline '\n'
const int MXN = 101;
ll prefix[MXN];
void solver() {
	ll n , k;
	cin >> n >> k;
	vector<ll> vec(n);
	for (auto & IT : vec) {
		cin >> IT;
	}
	prefix[0] = vec[0];
	for (ll i = 0; i < n; i++) {
		prefix[i] = prefix[i - 1] + vec[i];
	}
	ll maxi = INT_MIN;
	for (ll i = k; i < n; i++) {
		maxi = max(prefix[k] - prefix[i - k], maxi);
	}
	cout << maxi << nline;
}

int main() {
	int tt;
	cin >> tt;
	while (tt--) {
		solver();
	}
}