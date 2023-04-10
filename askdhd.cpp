#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define nline '\n'

void solver(){
	ll n;
	cin>>n;
	vector<ll> vec(n);
	for(auto & IT : vec){
		cin>>IT;
	}
	ll maxi = INT_MIN;
	ll mini = INT_MAX;
	for(ll i=0;i<n;i++){
		maxi = max(maxi , vec[i]);
		mini = min(mini , vec[i]);
	}
	cout<<maxi-mini<<nline;
}

int main(){
	ll t;
	cin>>t;
	while(t--){
		solver();
	}
}