/*                      GIẢI MÃ TĂNG GIẢM
Cho mảng A[] chỉ bao gồm các ký tự I hoặc D. Ký tự I được hiểu là tăng (Increasing) ký tự D được hiểu là giảm (Degreeasin). Sử dụng các số từ 1 đến 9, hãy đưa ra số nhỏ nhất được đoán nhận từ mảng A[]. Chú ý, các số không được phép lặp lại. Dưới đây là một số ví dụ mẫu:
A[] = “I”               : số tăng nhỏ nhất là 12.
A[] = “D”              : số giảm nhỏ nhất là 21
A[] =”DD”            : số giảm nhỏ nhất là 321
A[] = “DDIDDIID”: số thỏa mãn 321654798
Input:
Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test là một xâu ID
T, Length(A) thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ Length(A) ≤9; .
Output:
Đưa ra kết quả mỗi test theo từng dòng.
VD:
4
I
=> 12
D
=> 21
DD
=> 321
DDIDDIID
=> 321654798
*/

#include<bits/stdc++.h> 

using namespace std; 
#define test() int t; cin >> t; while(t--)
#define For(i,a,b) for(int i=a; i<=b; i++)

void Solve(string s){
    stack<int> res;
    For(i,0,s.size()){
        if(i==s.size() || s[i]=='I'){
            cout << i+1;
            while(res.empty() == 0){
                cout << res.top();
                res.pop();
            }
        }else if(s[i] == 'D') res.push(i+1);
    }
    cout << endl;
}

int main(){
    test(){
        string s;
        cin >> s;
        Solve(s);
    }
}