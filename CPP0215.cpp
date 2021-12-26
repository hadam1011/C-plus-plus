/*
Cho hai mảng đã được sắp xếp A1[] và A[2] gồm n, m phần tử theo thứ tự. Nhiệm vụ của bạn là tìm tổng lớn nhất của các sô bắt đầu tại phần tử đầu tiên của một mảng và kết thúc ở phần tử cuối cùng của một trong hai mảng. Ví dụ với mảng A1[] = {2, 3, 7, 10, 12}, A2[] = { 1, 5, 7, 8} ta có kết quả là 35 tương ứng với tổng S = 1+5+7+10+12.
Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào n là số phần tử của mảng A[]; dòng kế tiếp đưa vào n số A[i] của mảng; các số được viết cách nhau một vài khoảng trống.
T, n, A[i] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n ≤103; 1≤ A1[i], A2[j] ≤104;
Output:

Đưa ra kết quả mỗi test theo từng dòng
VD:
1
5 4
2 3 7 10 12
1 5 7 8 
=> 35
*/

#include <iostream>

using namespace std;
#define test() int t; cin >> t; while (--t)
#define For(i,a,b) for(int i=a; i<b; i++)

int main(){
    test(){
        int n,m; 
        cin >> n >> m;
        int a[n],b[m];
        For(i,0,n) cin >> a[i];
        For(i,0,m) cin >> b[i];

    }
}