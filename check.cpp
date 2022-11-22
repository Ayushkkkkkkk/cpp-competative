#include<bits/stdc++.h>
#define pi 3.141592653589793238
#define eular 2.718281828459045
#define mod 1000000007
#define infinity (1LL<<60)
#define length size();
#define prDouble(x) cout << fixed << setprecision(10) << x
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(x) int x; cin >> x

using namespace std;
// k = no of times we preform the sum
// x range = (1, n*2)

void solver(){
	int k , n;
	cin>>k>>n;
	vector<int> vec;
	map<int,int> check;
	for(int i=0;i<k;i++){
		read(x);
		vec.push_back(x);
	}
	int maxi = INT_MIN;
	for(int i=0;i<vec.size();i++){
		check[vec[i]] = check[vec[i]] + 1;
		maxi = max(maxi,vec[i]);
	}
	int total_sum = 0;
		int x =1;
		int temp = n;
		while(temp--){
		for(int i=0;i<vec.size();i++){
			maxi = max(maxi,vec[i]);
			while(check.count(x)==1){
					x++;
			}	while(1){
				vec.push_back(x);
				total_sum += abs(maxi-x);
				x = 1;
				break;	
			}
			if(temp==0){
				break;
			}
		}
	}
	cout<<total_sum<<endl;
}
	
int main(){
	fast_io;
	int t;
	cin>>t;
	while(t--){
		solver();
	}

}







