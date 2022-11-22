
#include<bits/stdc++.h>
using namespace std;

int gcd(int a , int b){

	if(a%b==0){
		return b;
	}

	return gcd(b , a%b);
}
int lcm(int a , int b){
	return a*b/gcd(a,b);
}

int binaryExpRec(int a , int b){
	if(b==0) return 1;
	if(b&1){
		return a * binaryExpRec(a,b/2)*binaryExpRec(a,b/2);
	}
	else{
		return binaryExpRec(a,b/2)*binaryExpRec(a,b/2);
	}
}
int binaryIte(int a , int b){
	int ans = 1;
	while(b>0){
		if(b&1){
			ans = ans *a * 1LL;
		}
		a *= a ;
		b >>=1;
	}
	return ans;
}


int main(){
	int a , b;
	cin>>a>>b;
	gcd(a,b);
	lcm(a,b);
}