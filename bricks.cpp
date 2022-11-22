#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define read(x) int x; cin>>x


typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}


template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T> void _print(unordered_set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T, class V> void _print(unordered_map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(unordered_map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(unordered_set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}


void solver(){
	int n ;
	cin>>n;
	vector<int> bricks(n);
	for(auto&P:bricks){
		cin>>P;
	}
	vector<int> bag1;
	vector<int> bag2;
	vector<int> bag3;
	int maxi = INT_MIN;
	int mini = INT_MAX;
	for(int i=0;i<n;i++){
		maxi = max(maxi , bricks[i]);
		mini = min(mini , bricks[i]);
	}
	debug(maxi);
	debug(mini);
	bag2.push_back(maxi);
	bag3.push_back(mini);
	for(int i=0;i<n;i++){
		if(bricks[i]!=maxi&&bricks[i]!=mini){
			bag1.push_back(bricks[i]);
		}
	}
	debug(bag1);
	if(bag1.size()==0){
		cout<<0<<endl;
		return;
	}
	sort(bag1.begin(), bag1.end());
	int w1 = bag1[bag1.size()-1];
	int w2 = bag2[0];
	int w3 = bag3[0];
	
	int ans = abs(w1-w2)+abs(w2-w3);
	cout<<ans<<endl;
}



int main(){
fastio();
#ifndef ONLINE_JUDGE
	freopen("error.txt", "w", stderr);
#endif	
	int t;
	cin>>t;
	while(t--){
		solver();
	}
	
	
	
}