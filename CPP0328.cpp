/*                                  CHIA HET CHO 8
Cho xâu ký tự S bao gồm các số từ 0 đến 9. Nhiệm vụ của bạn là đếm số các xâu con của S là số chia hết cho 8 và không chia hết cho 3.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test là một xâu ký tự số S.
T, S thỏa mãn ràng buộc: 1≤ T ≤100; 0≤ Length(S) ≤103.
Output:

Đưa ra kết quả mỗi test theo từng dòng.
VD:
2
888
=> 5
6564525600
=> 15
*/

#include <iostream>
#include <string>

using namespace std;
#define test() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)

int Solve(string s, int k){
    int ans=0, sum1=0, sum2=0;
    if(k > 3){
        For(i,k-3,k) sum2 = sum2*10 + s[i]-'0'; // ktra so chia het cho 8 
    }else{
        For(i,0,k) sum2 = sum2*10 + s[i]-'0';
    }
    for(int i=k-1; i>=0; i--){
        sum1 += s[i]-'0'; // ktra so chia het cho 3
    }
    if(!(sum2%8) && sum1%3) ans++;
    For(i,k,s.length()){
        sum1 = sum1 - s[i-k]-'0' + s[i]-'0';
        sum2 = 0;
        if(k > 3) For(j,i-2,i+1) sum2 = sum2*10 + s[j]-'0';
        else For(j,i-k+1,i+1) sum2 = sum2*10 + s[j]-'0';
        if(!(sum2%8) && sum1%3) ans++;
    }
    return ans;
}

int main(){
    test(){
        string s;
        cin >> s;
        int res = 0;
        For(i,1,s.length()+1){
            res += Solve(s,i);
        }
        cout << res << endl;
    }
}
