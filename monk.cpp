#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define nline '\n'

int main(){
	ll tt;
	cin>>tt;
	while(tt--){
		ll x;
		cin>>x;
		cout<<__builtin_popcount(x)<<nline;
	}
}