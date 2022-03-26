#include<bits/stdc++.h>
using namespace std;
main(){
	int N;
	int sum;
	cin >> N;
	int a[N] = {0};
	for(int i = 2 ; i <= N ; i++){
		if(a[i] == 0){
			cout << i << " ";
			sum += i;
			for(int j = 1 ; j*i < N ; j++){
				a[i * j] = 1;
			}
		}
	}
	cout << "= " << sum;
}
