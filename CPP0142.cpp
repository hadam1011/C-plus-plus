/*                              NGUYÊN TỐ CÙNG NHAU
*/
#include<iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>

using namespace std;

int Check(int n){
	if(n < 2) return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i == 0){
			return 0;
		}
	}
	return 1;
}

int Gcd(int a, int b){
	int c;
	while(b != 0){
		c = a%b;
		a = b;
		b = c;
	}
	return a;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,count=1;
		cin >> n;
		for(int i=2; i<n; i++){
			if(Gcd(n,i) == 1) count++;
		}
		if(Check(count)) cout << "1" << endl;
		else cout << "0" << endl;
	}
}