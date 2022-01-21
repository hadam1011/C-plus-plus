/*                          XÂU CON NHỎ NHẤT - 1
Cho hai xâu ký tự S1 và S2. Nhiệm vụ của bạn là hãy tìm xâu con nhỏ nhất của S1 chứa đầy đủ các ký tự của S2. Nếu không tồn tại xâu con thỏa mãn yêu cầu bài toán, hãy đưa ra -1.
Input:
Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test là bộ đôi S1 và xâu ký tự S2 được viết trên các dòng khác nhau.
T, S1, S2 thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ Length(S1), Length(S2) ≤100.
Output:
Đưa ra kết quả mỗi test theo từng dòng.
VD:
2
timetopractice
toc
=> toprac
zoomlazapzo
oza
=> apzo
*/
#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)

const ll MOD = 1e9+7;
int dem1[256] = {0} , dem2[256] = {0};
int pos1 = 0, pos2 = INT_MAX;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        string s1,s2;
        int cnt = 0 ,idx = -1; 
        int dem1[256] = {0} , dem2[256] = {0};
        int pos1 = 0, pos2 = INT_MAX;        
        cin >> s1 >> s2;
        for(int i=0; i<s2.length(); i++) dem2[s2[i]]++;
        for(int i=0; i<s1.length(); i++){
            dem1[s1[i]]++;
            if(dem1[s1[i]] <= dem2[s1[i]]) cnt++;
            if(cnt == s2.length()){
                while(dem1[s1[pos1]] > dem2[s1[pos1]] || !dem2[s1[pos1]]){
                    if(dem1[s1[pos1]] > dem2[s1[pos1]]) dem1[s1[pos1]]--;
                    pos1++;
                }
                if(pos2 > i - pos1 + 1){
                    pos2 = i - pos1 + 1;
                    idx = pos1;
                }
            }
        }
        if(idx == -1) cout << -1;
        else cout << s1.substr(idx,pos2);
        cout << endl;
    }
}   

