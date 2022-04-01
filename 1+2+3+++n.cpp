#include "bits/stdc++.h"
using namespace std;
int main() {
    int n,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i==1) printf("%d",i);
        else printf("+%d" ,i);
        sum+=i;
    }
    cout<<"="<<sum;
    return 0;
}
