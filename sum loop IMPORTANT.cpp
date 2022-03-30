#include <iostream>
using namespace std;

int main () {
    int n, i, x, sum;
    cin >> n;
    for(i = 0; i < n; i++) {
        cin >> x;
        sum += x;
    }
	cout << sum << endl;
}
