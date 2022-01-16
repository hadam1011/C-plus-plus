/*                              SỐ LỚN NHẤT CỦA DÃY CON LIÊN TỤC
Cho mảng A[] gồm n số nguyên không âm và số k. Hãy tìm số lớn nhất của mỗi dãy con liên tục gồm k phần tử của mảng. Ví dụ với mảng A[] = {1, 2, 3, 1, 4, 5, 2, 3, 6}, K = 3, ta có kết quả 3 3 4 5 5 5 6.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào n là số phần tử của mảng A[] và số k; dòng kế tiếp đưa vào n số A[i] của mảng; các số được viết cách nhau một vài khoảng trống.
T, n, A[i] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ k,n ≤10^7; 0≤ A[i] ≤10^7;
Output:

Đưa ra kết quả mỗi test theo từng dòng.
*/
#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(ll i=a; i<b; i++)

const ll MOD = 1e9+7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        ll n,k;
        cin >> n >> k;
        ll a[n];
        For(i,0,n) cin >> a[i];
        deque<ll> res;
        For(i,0,k){
            while(!res.empty() && a[i] > a[res.back()]) 
                res.pop_back();
            res.push_back(i);
        }
        cout << a[res.front()] << " ";
        For(i,k,n){
            if(res.front() <= i-k) res.pop_front();
            while(!res.empty() && a[i] > a[res.back()])
                res.pop_back();
            res.push_back(i);
            cout << a[res.front()] << " ";
        }
        cout << endl;
    }
}
