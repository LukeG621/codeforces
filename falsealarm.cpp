#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, x; cin >> n >> x;
        vector<int> doors(n);
        for (int i = 0; i < n; i++) cin >> doors[i];

        int first = -1, last = -1;
        for (int i = 0; i < n; i++) {
            if (doors[i] == 1) {
                first = i;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--) {
            if (doors[i] == 1) {
                last = i;
                break;
            }
        }

        int length = last - first + 1;
        if (length <= x) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
