#include<bits/stdc++.h>
#define pi 3.141592653589793238
#define e 2.718281828459045
#define phi 1.61803
#define mod 1000000007
#define infinity (1LL<<60)
#define ll long long
#define pb push_back
#define pf push_front
#define length size();
#define fr(a,b) for(int i = a; i < b; i++)
#define rep(i,a,n) for(int i = a; i < n; i++)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll,pair<ll,ll>>	
#define goog(tno) cout << "Case #" << tno <<": "
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(x) int x; cin >> x

using namespace std;	

int main(){
	fast_io;
	string host , resident , shuffle;
	cin>>host>>resident>>shuffle;
	host = host+resident;
	sort(host.begin(),host.end());
	sort(shuffle.begin(), shuffle.end());
	if(host.size()!=shuffle.size()){
		cout<<"NO"<<endl;
		return 0;
	}
	else{
		for(int i=0;i<host.size();i++){
			if(host[i]!=shuffle[i]){
				cout<<"NO"<<endl;
				return 0;
			}
		}
		cout<<"YES"<<endl;
	}
}







