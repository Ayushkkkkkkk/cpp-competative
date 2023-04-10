#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nline '\n'

void solver() {
	ll n , m;
	cin >> n >> m;
	vector<ll> a(n);
	vector<ll> b(m);
	for (auto & IT : a) {
		cin >> IT;
	}
	for (auto & IT : b) {
		cin >> IT;
	}
	ll i = 0 , j = 0;
	ll count = 0;
	while (i < n && j < m) {
		if (a[i] < b[j]) {
			count++;
			i++;
		}
		else {
			cout << count << " ";
			j++;
		}
		
	}
	// while (i < n) {
	// 	cout << count << " ";
	// 	i++;
	// }
	while (j < m) {
		cout << count << " ";
		j++;
	}
	cout << nline;
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	solver();
}