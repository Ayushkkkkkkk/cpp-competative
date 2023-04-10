#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define nline '\n'

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	ll n , q ; cin>>n>>q;
	vector<ll> vec(n);
	vector<ll> temp;
	ll curr = 0;
	for(auto & IT : vec){
		cin>>IT;
		curr +=IT;
	}
	temp = vec;
	while(q--){
		ll type;
		cin>>type;
		if(type==1){
			ll a , x ; cin>>a>>x;
			ll answer;
			if(x > temp[a-1]){
				answer = curr + abs(temp[a - 1] - x);
			}
			else if(x < temp[a - 1]){
				answer = curr - abs(temp[a - 1] - x);
			}
			else{
				answer = curr;
			}
			curr = answer;
			temp[a - 1] = x;
			cout<<curr<<nline;
		}
		else{
			ll x ; cin>>x;
			ll answer = n * x;
			curr = answer;
			vector<ll> inner(n , x);
			temp = inner;
			cout<<curr<<nline;
		}
	}
}