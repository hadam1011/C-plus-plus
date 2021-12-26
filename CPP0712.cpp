	/* 						LIỆT KÊ TỔ HỢP
Cho số tự nhiên N và số K. Hãy đưa ta các tổ hợp chập K của 1, 2, .., N.
 Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là bộ đôi N, K được viết trên 1 dòng.
T, N, K thỏa mãn ràng buộc :1 ≤ T, K, N ≤ 20.
Output:
Đưa ra kết quả mỗi test theo từng dòng.
VD:
1
5 3
=> 123  124 125 134  135 145 234 235 245 345
*/

#include<iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

void Try(int i, int n, int a[], int k){
	for(int j=a[i-1]+1; j<=n-k+i; j++){
		a[i] = j;
		if(i == k){
			for(int m=1; m<=k; m++){
				cout << a[m];
			}
			cout << " ";
		}else Try(i+1,n,a,k);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,a[1000]={},k;
		cin >> n >> k;
		Try(1,n,a,k);
		cout << endl;
	}
}