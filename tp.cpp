#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define nline '\n'

void solver(){
	ll n , m;
	cin>>n>>m;
	vector<ll> a(n);
	vector<ll> b(m);
	for(auto & IT : a){
		cin>>IT;
	}
	for(auto & IT : b){
		cin>>IT;
	}
	ll i=0 , j=0;
	ll ans = 0;
	while(i<n&&j<m){
		while(i<n&&a[i]<b[j]){
			i++;
		}
		while(j<m&&a[i]>b[j]){
			j++;
		}
		if(i<n&&j<m&&a[i]==b[i]){
			ll counta = 0 , countb = 0 , initialValue = a[i];
			while(i<n&&initialValue==a[i]){
				i++;
				counta++;
			}
			while(j<m&&initialValue==b[j]){
				j++;
				countb++;
			}
			ans +=counta*countb;
		}
	}
	cout<<ans<<nline;
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	solver();
}