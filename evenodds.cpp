#include<bits/stdc++.h>
using namespace std;

  long long solve(long long n, long long k) {
  if (k <= ceil((double) n /2.0)) 
    return 2 * k - 1;
  else {
    k-= ceil((double) n /2.0 );
    return 2 * k;
  }
}

int main() {
  long long n, k; cin >> n >> k;

  cout << solve(n, k) << endl;
  
  return 0;
}
