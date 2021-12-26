#include<iostream>
#include<math.h>
using namespace std;
int check(int n){
	if(n<2) return 0;
	for(int i=2; i<n; i++)
		if(n%i == 0) return 0;
	return 1;
}

int main(){
	int t;
	long long n,x;
	cin >> t;				
	while(t--)
	{
		cin >> n;
		for(int i=2; i<=sqrt(n); i++){
			while(n%i == 0){
				x = i;
				n /= i;
			}
		}
		if(n>1) x = n;
		cout << x;
		cout << endl;
	}
}
