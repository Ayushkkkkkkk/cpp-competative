#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define nline '\n'


void solver() {
	string s;
	cin>>s;
	bool checker[s.size()];
	for(ll i=0;i<s.size();i++){
		checker[i]=0;
	}
	ll p;
	cin>>p;
	ll sum = 0;
	vector<pair<char , ll>> vec;
	vector<pair<char , pair<ll , ll >>> temp;
	for(ll i=0;i<s.size();i++){
		sum +=s[i]-0-96;
		vec.push_back({s[i],s[i]-0-96});
		temp.push_back({s[i],{s[i]-0-96,i}});
	}
	sort(temp.begin(),temp.end());

	
	if(sum<=p){
		cout<<s<<nline;
		return;
	}
	for(ll i=0;i<temp.size();i++){
		if(sum>p){
			sum -=temp[temp.size()-i-1].second.first;
			checker[temp[temp.size()-i-1].second.second] = true;
		}
	}
	string ans= "";
	for(ll i=0;i<s.size();i++){
		if(!checker[i]){
			ans+=s[i];
		}
	}
	cout<<ans<<nline;
}

int main(){
	ll t;
	cin>>t;
	while(t--){
		solver();
	}
}
