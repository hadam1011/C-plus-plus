/*                  KIỂM TRA DÃY FIBONACCI
*/
#include<iostream>
#include<algorithm>
using namespace std;

int Check(int n){
	if(n <= 3) return 1;
	int f0=2, f1=3, fn=f1+f0;
	while(fn < n){
		fn = f0 + f1;
		f0 = f1;
		f1 = fn;
	}
	if(fn == n) return 1;
	else return 0;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,a[1000];
		cin >> n;
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		for(int i=0; i<n; i++){
			if(Check(a[i])) cout << a[i] << " ";
		}
		cout << endl;
	}
}