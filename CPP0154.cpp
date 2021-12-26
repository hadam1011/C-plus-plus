/*TỔNG CHIA DƯ CHO K*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long int sum(int n){
	return (n*(n+1))/2;
}

int main(){
	int t,n;
	cin >> t;
	while(t--){
		long int k,result;
		cin >> n >> k;
		if(n<k){
			result = sum(n);
		}else if(n == k){
			result = sum(n-1);
		}else{
			long int m = n - n%k;
			result = (m/k) * sum(k-1) + sum(n%k);
		}
		if(result == k) cout << 1 << endl;
		else cout << 0 << endl;
	}
}



