/*                          MẬT KHẨU
(Giới hạn thời gian chạy: 10 giây)
Hệ thống quản lý đào tạo của PTIT đang gặp một vấn đề về bảo mật. Do sự cố này, các account bị đổi thành tên viết liền của các sinh viên. Và chỉ cần đánh một chuỗi kí tự có chứa mật khẩu là có thể đăng nhập vào hệ thống. Chẳng hạn sinh viên A có mật khẩu là “abcd”, nếu ai đó đăng nhập với tài khoản là tên của A, mật khẩu “abcdef” hay “aaaabcd” đều được chấp nhận.
Nhân cơ hội này, rất nhiều bạn sinh viên đã cố gắng hack vào tài khoản của những người khác. Cho biết danh sách mật khẩu của tất cả các user, bài toán đặt ra là hãy xác định xem có nhiều nhất bao nhiêu trường hợp user này có thể login vào user khác?
Input:
Dòng đầu tiên là số nguyên N (1 ≤  N ≤  100 000).
N dòng tiếp theo, mỗi dòng chứa mật khẩu của một user, có độ dài không quá 10 kí tự và chỉ gồm các kí tự thường.
Output: 
In ra một số nguyên là đáp án đáp án tìm được.
VD:
3
aaa
aa
abb
=> 1
*/
#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)

const ll MOD = 1e9+7;

bool cmp(string a, string b){
    return a.length() > b.length();
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<string> pass;
    tests(){
        string s;
        cin >> s;
        pass.push_back(s);
    }
    sort(pass.begin(), pass.end(),cmp);
    int res = 0, n = pass.size();
    For(i,0,n-1){
        For(j,i+1,n){
            if(pass[i] == pass[j]) res += 2;
            else if(pass[i].find(pass[j]) != -1) res++;
        }
    }
    cout << res;
}   

