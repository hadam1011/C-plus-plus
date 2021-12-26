/*                  ƯỚC SỐ CHUNG LỚN NHẤT CỦA SỐ NGUYÊN LỚN
Cho hai số a và b trong đó a≤10^12, b≤10^250. Nhiệm vụ của bạn là tìm ước số chung lớn nhất của hai số a, b.
Input:

Dòng đầu tiên đưa vào T là số lượng bộ test.
T dòng tiếp đưa các bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào số a; dòng tiếp theo đưa vào số b.
Các số T, a, b thỏa mãn ràng buộc: 1≤T≤100; 1≤a≤10^12; 1≤b≤10^250;
Output:

Đưa ra kết quả mỗi test theo từng dòng.
VD:
1
1221
1234567891011121314151617181920212223242526272829
=> 3
*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
using ll = long long;
#define test() int t; cin >> t; while(t--)

ll Mod(ll a, string b){
    ll res = 0;
    for(int i=0; i<b.length(); i++){
        res = (res*10 + b[i]-'0') % a;
    }
    return res;
}

void Solve(ll a, string b){
    ll ans = Mod(a,b);
    ll res = __gcd(ans,a);
    cout << res << endl;
}

int main(){
    test(){
        ll a;
        string b;
        cin >> a >> b;
        Solve(a,b);
    }
}