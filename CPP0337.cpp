/*                               XÂU CON NHỎ NHẤT - 2
Cho xâu ký tự S. Nhiệm vụ của bạn là hãy tìm độ dài xâu con nhỏ nhất của S chứa đầy đủ các ký tự của S mỗi ký tự ít nhất một lần. Ví dụ với xâu S=”aabcbcdbca” ta có xâu con nhỏ nhất là “dbca”.
Input:
Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test là một xâu ký tự S được viết trên một dòng.
T, S thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ Length(S)≤10^5.
Output:
Đưa ra kết quả mỗi test theo từng dòng.
VD:
2
aabcbcdbca
=> 4
aaab
=> 2
*/

#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)

const ll MOD = 1e9+7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        string s;
        cin >> st;
        int dem[256] = {}, len;
        set<char> st;
        For(i,0,s.length()) st.insert(s[i]);
        len = st.size();
        int cnt = 0, l = 0, res = INT_MAX;
        For(i,0,26){
            if(dem[i]) cnt++;
        }
        For(i,0,s.length()){
            dem[s[i]]++;
            if(dem[s[i]] == 1) cnt++;
            if(cnt == len){
                while(dem[s[l]] > 1){
                    dem[s[l]]--;
                    l++;
                }
                res = min(res, i-l+1);
            } 
        }
        cout << res << endl;
    }
}   

