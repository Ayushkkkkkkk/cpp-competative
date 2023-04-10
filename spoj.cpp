
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

void SieveOfEratosthenes(int n){
	bool prime[n + 1];
	memset(prime, true, sizeof(prime));

	for (int p = 2; p * p <= n; p++) {
		if (prime[p] == true) {
			for (int i = p * p; i <= n; i += p)
				prime[i] = false;
		}
	}

	// Print all prime numbers
	for (int p = 2; p <= n; p++)
		if (prime[p]&&p==n-1)
			cout << p << " "<<endl;
}

// Driver Code
int main()
{	int tt;
	cin>>tt;
	while(tt--){
	ll n;
	cin>>n;
	SieveOfEratosthenes(n);
	return 0;
}
}
