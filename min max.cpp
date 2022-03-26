#include<bits/stdc++.h>
using namespace std;

main() {
    int t, n, mx = INT_MIN, mn = INT_MAX;
    cin >> t;
    while(t--) {
        cin >> n;
        mx = max(mx, n);
        mn = min(mn, n);
    }
    cout << mn << "\n" << mx;
}
