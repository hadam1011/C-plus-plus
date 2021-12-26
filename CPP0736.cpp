/*
Cho mảng A[] gồm n số nguyên và số X. Hãy tìm độ dài dãy con liên tục nhỏ nhất có tổng lớn hơn X. Ví dụ với A[] = { 1, 4, 45, 6, 0, 19} và X = 51 ta có câu trả lời là 3 tương ứng với dãy con {4, 45, 6}. Với dãy A[] = {1, 10, 5, 2, 7} và X =9 ta có câu trả lời là 1 tương ứng với dãy con {10}. Với dãy A[] = {1, 2, 4}và X=8 ta có câu trả lời là -1.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên là số phần tử của mảng n và số X; dòng tiếp theo là n số A[i] của mảng A[]; các số được viết cách nhau một vài khoảng trống.
T, n, X, A[i] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n  ≤107; 1≤ A[i]  ≤107.
Output:

Đưa ra kết quả mỗi test theo từng dòng.
VD:
2
6 51
1 4 45 6 0 19
=> 3
3 8
1 2 4
=> -1
*/

#include <iostream>
#include <algorithm>

using namespace std;
using ll = long long;
#define test() int t; cin >> t; while(t--)
#define For(i,a,b) for(int i=a; i<b; i++)

void Slove(ll a[], ll n, ll x){
    int l=0, res=1e9;
    ll sum=0;
    int check = 0;
    For(i,0,n){
        sum += a[i];
        while(sum > x){
            res = min(res,i-l+1);
            sum -= a[l++];
            check = 1;
        }
    }
    if(!check) res = -1;
    cout << res << endl;
}

int main(){
    test(){
        ll n,x; 
        cin >> n >> x;
        ll a[n];
        For(i,0,n) cin >> a[i];
        Slove(a,n,x);
    }
}
