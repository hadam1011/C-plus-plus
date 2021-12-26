/*
Cho mảng A[] gồm n phần tử và số X. Hãy đưa sắp xếp các phần tử của mảng theo trị tuyệt đối của |X - A[i] |. Ví dụ với A[] = {10, 5, 3, 9, 2} và X = 7 ta đưa ra mảng được sắp xếp theo nguyên tắc kể trên: A[] = {5, 9, 10, 3, 2} vì |7-10|=3, |7-5|=2, |7-3|=4, |7-9|=2, |7-2|=5. Trong trường hợp có nhiều phần tử có giá trị tuyệt đối như nhau, ưu tiên theo thứ tự số xuất hiện trước trong mảng ban đầu.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên là số phần tử của mảng n và X; dòng tiếp theo là n số A [i] của mảng A [];các số được viết cách nhau một vài khoảng trống.
T, n, X thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n, X, A[i] ≤105.
Output:

Đưa ra kết quả mỗi test theo từng dòng.
VD:
2
5 7
10 5 3 9 2
=> 5 9 10 3 2
5 6
1 2 3 4 5
=> 5 4 3 2 1
*/

#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;
#define test() int t; cin >> t; while(t--)
#define For(i,a,b) for(int i=a; i<b; i++)

int k;
bool cmp(int a, int b){
    return abs(a-k) < abs(b-k); 
}

void Solve(int a[], int n){
    stable_sort(a,a+n,cmp);
    For(i,0,n) cout << a[i] << " "; 
    cout << endl;
}

int main(){
    test(){
        int n; 
        cin >> n >> k;
        int a[n];
        For(i,0,n) cin >> a[i]; 
        Solve(a,n);
    }
}