#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define nline '\n'

class solution {
private:
	vector<ll> vec = {1 , 3 , 5};
public:
	int sum(int a , int b){
		return a + b + vec[2];
	}
};


int main(){
	solution obj;
	cout<<obj.sum(1 , 3);
}