/*                  SẮP XẾP CHẴN LẺ
Cho mảng A[] gồm n số nguyên dương. Nhiệm vụ của bạn là hãy sắp xếp lại các phần tử của mảng sao cho A[i] ≥A[i-1] nếu i chẵn,  A[i] ≤A[i-1] nếu i lẻ. Ví dụ với mảng A[] = {1, 2, 2, 1} ta được mảng được sắp A[] = { 1, 2, 1, 2}.
Input:
Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào n là số phần tử của mảng A[]; dòng kế tiếp đưa vào n số A[i] của mảng; các số được viết cách nhau một vài khoảng trống.
T, n, A[i] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n ≤103; 1≤ A[i] ≤103;
Output:
Đưa ra kết quả mỗi test theo từng dòng.
VD:
2
4
1 2 2 1
=> 1 2 1 2
3
1 3 2
=> 1 3 2
*/

#include<bits/stdc++.h> 

using namespace std; 
#define test() int t; cin >> t; while(t--)
#define For(i,a,b) for(int i=a; i<b; i++)

main(){
    test(){
        int n, count=0;
        cin >> n;
        int a[n], b[n]={};
        For(i,0,n) cin >> a[i];
        sort(a,a+n);
        for(int i=0; i<n; i+=2) b[i] = a[count++];
        for(int i=1; i<n; i+=2) b[i] = a[count++];
        For(i,0,n) cout << b[i] << " ";
        cout << endl;
    }
}