/*                          LIỆT KÊ SỐ CÓ BA ƯỚC SỐ TRONG KHOẢNG
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int check(long long n){
	if(n<2) return 0;
	for(long long i=2;i<=sqrt(n);i++){
		if(n%i == 0) return 0;
	}
	return 1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int count=0;
		long long l,r;
		cin >> l >> r;
		long long min=sqrt(l), max=sqrt(r);
		for(long long i=min;i<=max;i++){
			if(check(i) && i*i >= l) 
				count++;
		}
		cout << count << endl;
	}
}    