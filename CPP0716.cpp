/*                              ĐẾM SỐ CÁCH DI CHUYỂN
Cho ma trận vuông A[N][N] gồm các số nguyên dương và số tự nhiên K. Hãy tìm số các cách di chuyển từ phần tử đầu tiên (A[0][0] đến phần tử cuối cùng A[N-1][N-1] sao cho tổng các phần tử của phép di chuyển đúng bằng K. Biết từ phần tử A[i][j], ta chỉ được phép dịch chuyển đến phần tử A[i+1][j] hoặc A[i][j+1]. Ví dụ với ma trận dưới đây sẽ có 2 phép di chuyển theo nguyên tắc kể trên để có tổng bằng 12.

1 2 3         
4 6 5          Cách 1: 1 -> 2 -> 6 -> 2 -> 1    
3 2 1          Cách 2: 1 -> 2 -> 3 -> 5 -> 1

Input:
Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: Dòng đầu tiên đưa vào hai số N, K ; dòng tiếp là N×N các phần tử của ma trận A[][]; các phần tử được viết cách nhau một vài khoảng trống.
T, N, A[i][j] thỏa mãn ràng buộc: 1≤T≤100; 1≤ N ≤20; 1≤ A[i][j] ≤200.
Output:
Đưa ra kết quả mỗi test theo từng dòng.
*/

#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<=b; i++)

const ll MOD = 1e9+7;
int a[25][25], sum[25][25];
int res,n,k;

void Solve(int i, int j){
    if(i==n && j==n){
        if(sum[n][n] == k) res++;
        return;
    }
    if(i != n){
        sum[i+1][j] = sum[i][j] + a[i+1][j];
        Solve(i+1,j); 
    }
    if(j != n){
        sum[i][j+1] = sum[i][j] + a[i][j+1];
        Solve(i,j+1);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n >> k;
        For(i,1,n) For(j,1,n){
            cin >> a[i][j];
            sum[i][j] = 0;
        }
        sum[1][1] = a[1][1];
        res = 0;
        Solve(1,1);
        cout << res << endl;
    }
}
