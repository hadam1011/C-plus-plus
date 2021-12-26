/*                            KIỂM TRA SỐ FIBONACCI
*/
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n, x=0,y=1,sum=0;
		cin>>n;
		while(sum < n){
			sum = x+y;
			x = y;
			y = sum;
		}
		if(sum == n) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
}