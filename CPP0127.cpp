/*CẶP SỐ NGUYÊN TỐ ĐẦU TIÊN CÓ TỔNG BẰNG N*/
#include<iostream>
using namespace std;
int main(){
	int t,a,arr[1000000]={};
	cin >> t;
	arr[0] = 1;
	arr[1] = 1;
	for(int i=2; i<1000000; i++)
		if(arr[i] == 0) 		
			for(int j=i+i; j<1000000; j+=i)
				arr[j] = 1;
				
	while(t--)
	{
		cin >> a;
		int n=2, check=0;
		while(n <= a/2){
			if(arr[a-n] == 0 && arr[n] == 0){
				cout << n << " " << a-n;
				check = 1;
				break;
			}
			n++;
		}
		if(check==0) cout << "-1" << endl;
		cout << "\n";
	}
}