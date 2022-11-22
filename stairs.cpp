
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  int t;
  cin >> t;
  while (t--) {
    int r;
    cin >> r;
    int arr[r];
    for (int i = 0; i < r; i++) {
      cin >> arr[i];
    }
    int e = 1;
    for (int i = 0; i < r - 1 and e == 1; i++) {
      e = 0;
      while (arr[i + 1] >= arr[i] and i < r - 1) {
        i++;
      }
      if (i == r - 1) {
        cout << "YES" << endl;
        break;
      }
      else {
        cout << "NO" << endl;
      }
    }
    if (e == 1) {
    cout << "YES" << endl;
  }
  }
  
}