#include<bits/stdc++.h>
using namespace std;


#define ll long long 
#define nline '\n'
const ll MXN = 1e9+7;

void solver(){
	ll c;
	cin>>c;
	int bit_ct =(int)log2(c)+1;
	int a=0 , b = 0;
	vector<int> set_bits;
	for(ll i=0;i<bit_ct;++i){
		if(c&(1<<i)){
			set_bits.push_back(i);
		}
		else{
			a |=(1<<i);
			b |=(1<<i);
		}
	}
	int sz = 1 << set_bits.size();
	for(int mask = 0;mask < sz ; mask++){
		int a_copy = a , b_copy = b;
		for(int j=0;j<set_bits.size();j++){
			if(mask & (i<<j)){
				a_copy |=(1<<set_bits[j]);
			}
			else{
				a_copy |=(1<<set_bits[j]);
			}
		}
		ans = max(ans ,a_copy * 1LL * b_copy);
	}
	cout<<ans<<nline;
}

int main(){
	ll tt;
	cin>>tt;
	while(t--){
		solver();
	}
}