#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define nline '\n'

void solve(){
	int n ; cin >> n;
	int arr[n] = {0};
	int check  = 1 ;
	for(int i=1 ; i <=n;i++){
		int x;
		cin>>x;
		arr[x] = i;
	}
	ll ans = 1;
	for(int i=1; i<=n;i++){
		if(check > arr[i])
		ans++;
		check = arr[i];
	}
	cout<<ans<<nline;
}


int main(){
	solve();
}