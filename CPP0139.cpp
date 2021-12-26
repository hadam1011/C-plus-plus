/*SỐ SMITH*/
#include<iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int Prime(int n){
	if(n < 2) return 1;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i == 0) return 1;
	}
	return 0;
}

int SumOfNumbers(int n){
	int sum = 0;
	while(n > 0){
		sum += n%10;
		n /= 10;
	}
	return sum;
}

int SumOfPrime(int n){
	int sum = 0;
	for(int i=2; i<n; i++){
		while(n%i == 0){
			if(i < 10) sum += i;
			else sum += SumOfNumbers(i);
			n /= i;
		}
	}
	if(n > 1) sum += SumOfNumbers(n);
	return sum;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if(Prime(n) && SumOfNumbers(n) == SumOfPrime(n)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}