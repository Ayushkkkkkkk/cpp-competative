#include<bits/stdc++.h>
using namespace std;
#define ll long long

long long fibo(long long n,vector<ll>& v){
    if(n<2){
        return n;
    }
    if(v[n]!=-1){
        return v[n];
    }
    v[n] =  fibo(n-1,v) + fibo(n-2,v);
    return v[n];
}
ll iterativeDP(ll n,vector<ll>& dp){
    dp[0] = 1;
    dp[1] = 1;
    for(ll i = 2;i<=n;i++){
        dp[i] = dp[i-1]+dp[i-2];
    }
return 0;
}


int main(){
    long long n ;
    cin>>n;
    vector<ll> vec;
    cout<<iterativeDP(n,vec);
}