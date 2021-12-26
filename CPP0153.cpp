//                      CHIA DƯ TỪ 1 ĐẾN N
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
		long int k;
		cin >> n >> k;
		if(n<k){
			cout << sum(n) << endl;
		}else if(n == k){
			cout << sum(n-1) << endl;
		}else{
			long int m = n - n%k;
			long int result = (m/k) * sum(k-1) + sum(n%k);
			cout << result << endl;
		}
	}
}