/*                          ƯỚC SỐ CỦA GIAI THỪA
Cho số tự nhiên N và số nguyên tố P. Nhiệm vụ của bạn là tìm số x lớn nhất để N! chia hết cho p^x. Ví dụ với N=7, p=3 thì x=2 là số lớn nhất để 7! Chia hết cho 3^2. 
Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là cặp số N, p được viết cách nhau một vài khoảng trống.
T, N, p thỏa mãn rang buộc : 1≤T≤100; 1≤N≤10^5; 2≤p≤5000;
Output:

Đưa ra kết quả mỗi test theo từng dòng.
VD:
3
62  7
=> 9
76  2
=> 73
3  5
=> 0
*/

#include <iostream>

using namespace std;
#define test() int t; cin >> t; while(t--)

void Solve(int n, int p){
    int res = 0;
    for(int i=2; i<=n; i++){
        int m = i;
        while(!(m%p)){
            res++;
            m /= p;
        }
    }
    cout << res << endl;
}

int main(){
    test(){
        int n,p;
        cin >> n >> p;
        Solve(n,p);
    }
}