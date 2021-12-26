/*							LIỆT KÊ HOÁN VỊ
Cho số tự nhiên N. Hãy đưa ta các hoán vị của 1, 2, .., N.
Input:
Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một số N được viết trên 1 dòng.
T, N thỏa mãn ràng buộc :1 ≤ T, N ≤ 20.
Output:
Đưa ra kết quả mỗi test theo từng dòng.
VD:
1
3
=> 123  132 213 231 312 321
*/

#include<iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

void Try(int i, int n, int check[], int a[]){
	for(int j=1; j<=n; j++){
		if(check[j] == 0){
			check[j] = 1;
			a[i] = j;
			if(i == n){
				for(int k=1; k<=n; k++){
					cout << a[k];
				}
				cout << " ";
			}else Try(i+1,n,check,a);
			check[j] = 0;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,check[1000]={},a[1000];
		cin >> n;
		Try(1,n,check,a);
		cout << endl;
	}
}