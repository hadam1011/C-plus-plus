/*ƯỚC SỐ CHIA HẾT CHO 2*/
#include<iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>

using namespace std;

int Check(long int n){
	long int m = sqrt(n);
	if(m*m == n) return 1;
	else return 0;
}

int Count(long int n){
	int result = 0;
	if(n%2 == 0 && Check(n) == 0) result++;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i == 0){
			if(i%2 == 0) result++;
			if((n/i)%2 == 0) result++;
		}
	}
	return result;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long int n;
		cin >> n;
		cout << Count(n) << endl;
	}
}