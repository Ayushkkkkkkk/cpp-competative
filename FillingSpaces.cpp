#include<bits/stdc++.h>
using namespace std;
#define ll long long 


int main(){
	int n;
	cin>>n;

	ll dp[n+1];

	dp[0] = 1;
	dp[1] = 0;

	for(ll i = 2;i<=n;i++){
		dp[i] = 2*dp[i-2];
	}
	cout<<dp[n];
}