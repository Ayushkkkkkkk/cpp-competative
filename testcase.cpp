
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define all(x) (x).begin(),(x).end()
#define vec_p vector<pair<int,int>
#define v vector<int>

struct testcase{
    ll a,n,d;
};
int randomNumber(ll a,ll b){
    return a + (rand() % b);
}
testcase generateTestCase(){
    testcase randomTest;
    randomTest.a = randomNumber(1,100000);
    randomTest.n = randomNumber(1,100000);
    randomTest.d = randomNumber(-100000,100000);

}
ll bruteForce(testcase T){
    ll ret;
    return ret;
}
ll optimizedSolution(testcase T){
    ll ret;
    return ret;
}

void debugger(){
    testcase random = generateTestCase();
    int ans1 = bruteForce(random);
    int ans2 = optimizedSolution(random);
    if(ans1 != ans2) {
        cout<<random.a;
        return;
    }
}


void solve(){
    
}
int main(){
	int t;
	cin>>t;
	while(t--)
		solve();
	return 0;
}
