#include<bits/stdc++.h>
using namespace std;

#define ll long long 

int find(vector<ll>& vec , ll k){
	ll maxi = INT_MIN;
	ll current = 0;
	for(ll i=0;i<vec.size();i++){
		current +=vec[i];
		if(i>=k-1){
			maxi = max(maxi , current);
			current -=vec[i-(k-1)]; 
		}
	}
	return maxi;
}


int main(){
	ll k = 3;
	vector<ll> vec = {4,2,1,7,8,1,2,8,1,0};
	cout<<find(vec , k);
}