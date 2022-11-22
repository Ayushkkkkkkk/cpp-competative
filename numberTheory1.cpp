#include<bits/stdc++.h>
using namespace std;
const int m = 47;
void fact(){
	long long n;
	cin>>n;
	long long fact = 1;
	for(int i=2;i<n;i++){
		fact = (fact*i)%m;
	}
	cout<<fact<<endl;
}
void binary(){
	int n = 5;
	int check = 2;
	int mask = 1<<check;
	if((n&mask)!=0){
		cout<<"set";
	}
	else{
		cout<<"unset";
	}

	// (n&(~(1<<i)));
	__builtin_popcount(n);
	__builtin_popcountll(n);
}
int main(){
	binary();
}