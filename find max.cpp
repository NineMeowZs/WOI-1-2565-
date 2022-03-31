#include<bits/stdc++.h>
using namespace std;

main() {
    int t, n, mx = INT_MIN;
    cin >> t;
    while(t--) {
        cin >> n;
        mx = max(mx, n);
        
    }
    cout <<  mx;
}
