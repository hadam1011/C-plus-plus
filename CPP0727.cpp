/*
Cho mảng A[] gồm n số nguyên dương. Hãy tìm tổng lớn nhất của dãy con thỏa mãn ràng buộc không có hai phần tử kề nhau thuộc một dãy con. Ví dụ với mảng A[] = {3, 2, 7, 10} ta nhận được kết quả là 13 = 10 + 3. Với mảng A[] = {3, 2, 5, 10, 7} ta có kết quả là 15 = 3 + 5 +7.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào n là số phần tử của mảng A[]; dòng kế tiếp đưa vào n số A[i] của mảng; các số được viết cách nhau một vài khoảng trống.
T, n, A[i] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n ≤105; 1≤ A[i] ≤105;
Output:

Đưa ra kết quả mỗi test theo từng dòng.
VD:
2
6
5 5 10 100 10 5
=> 110
3
1 20 3
=> 20
*/

#include <iostream>
#include <algorithm>

using namespace std;
#define test() int t; cin >> t; while(t--)
#define For(i,a,b) for(int i=a; i<b; i++)
using ll = long long;

void Solve(int a[], int n){
    ll sum[n];
    sum[0] = a[0];
    sum[1] = max(a[0],a[1]);
    For(i,2,n) sum[i] = max(sum[i-2]+a[i],sum[i-1]);
    cout << sum[n-1] << endl;
}

int main(){
    test(){
        int n; cin >> n;
        int a[n];
        For(i,0,n) cin >> a[i];
        Solve(a,n);
    }
}