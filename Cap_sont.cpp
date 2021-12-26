#include<iostream>
using namespace std;
int main(){
	int t,a,arr[10000]={};
	cin >> t;
	arr[0] = 1;
	arr[1] = 1;
	for(int i=2; i<10000; i++)
		if(arr[i] == 0) 		
			for(int j=i+i; j<10000; j+=i)
				arr[j] = 1;
				
	while(t--)
	{
		cin >> a;
		int n=2;
		while(n <= a/2){
			if(arr[a-n] == 0 && arr[n] == 0){
				cout << n << " " << a-n;
				break;
			}
			n++;
		}
		cout << "\n";
	}
}