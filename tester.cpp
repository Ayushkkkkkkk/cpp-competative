#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nline '\n'

int main(){
	ios_base::sync_with_stdio(false) ; cin.tie(NULL);
	ll t ; cin>>t;
	while(t--){
		ll n , m;
		cin>>n>>m;
		vector<ll> res(100001 , 0);
		for(ll i = 0 ; i<m;i++){
			ll a , b ; cin>>a>>b;
			res[max(a , b)] = max(res[max(a , b)] , min(a , b));
		}
		ll ans = 0 , len = 1;
		for(ll i = 1 ; i<=n;i++){
			ll newlen = i - res[i];
			len = min(len , newlen);
			ans +=len;
			len++;
		}
		cout<<ans<<nline;
	}
}