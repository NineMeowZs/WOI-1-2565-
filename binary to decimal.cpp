#include <bits/stdc++.h>
using namespace std;

int main(){

    long long int n;
    cin >> n;

    int dec=0;
    int digit=0;
    while(n!=0){
        dec+=n%10 * pow(2,digit);
        n/=10;
        digit++;
    }

    cout <<  dec;

    return 0;
}
