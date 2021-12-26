/*                          ƯỚC SỐ NGUYÊN TỐ NHỎ NHẤT
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int Result(long int n){
	int x;
	for(int i=3; i<=sqrt(n); i+=2){
		if(n%i == 0){
			x = i;
			break;
		}
	}
	return x;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long int n;
		cin >> n;
		cout << 1 << " ";
		long int arr[1000000]={};
		for(long int i=2; i<1000000; i++){
			if(arr[i] == 0){
				for(long int j=i+i; j<1000000; j+=i)
					arr[j] = 1;
			}
		}
		for(long int i=2; i<=n; i++){
			if(i%2 == 0) cout << 2 << " ";
			else if(arr[i] == 0) cout << i << " ";
			else cout << Result(i) << " ";
		}
		cout << endl;
	}
}