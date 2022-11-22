#include<bits/stdc++.h>
using namespace std;

#define ll long long


int slidingWindow(vector<ll> arr , ll target) {
	ll windowStart = 0;
	ll currentWindowSum = 0;
	ll minWindowSize = INT_MAX;
	for (ll windowEnd = 0; windowEnd < arr.size(); windowEnd++) {
		currentWindowSum += arr[windowEnd];
		while(currentWindowSum >=target){
			minWindowSize = min(minWindowSize , windowEnd-windowStart+1);
			currentWindowSum -=arr[windowStart];
			windowStart++;
		}
	}
	return minWindowSize;
}


int main() {
	vector<ll> vec = {4, 2, 2, 7, 8, 1, 2, 8, 10};
	ll target = 8;
	cout << slidingWindow(vec , target);
}