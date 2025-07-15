#include<bits/stdc++.h>
using namespace std;

int main() { 
    long long n,m,a; cin >> n >> m >> a;

    long long squareCount = 0;

    squareCount += (n/a) * (m/a);
    if(n%a != 0) squareCount += (m/a);
    if(m%a != 0) squareCount += (n/a);
    if(n%a != 0 && m%a != 0) squareCount += 1;
    cout << squareCount;

    return 0;
}
