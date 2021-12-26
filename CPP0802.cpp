/*                                  TÍNH TỔNG
Cho file dữ liệu dạng văn bản DATA.in có thể chứa cả số và ký tự.   
Hãy lọc ra các số nguyên int trong file và tính tổng các số đó.
Chú ý: file dữ liệu có rất nhiều dòng với rất nhiều số và ký tự xen kẽ nhau. Chỉ tính tổng các số thỏa mãn điều kiện là số kiểu int.
Input

File văn bản DATA.in có không quá 1000 dòng.
Output

Ghi ra giá trị tổng các số tính được.
VD:
12 3 4 5 6 7
Aaa 1 1 Bbb XXX yyy 5 5
999999999999999999999999
9
=> 58
*/

#include <bits/stdc++.h>
#include <fstream>

using namespace std;
using ll = long long;
#define For(i,a,b) for(int i=a; i<b; i++) 

int check(string s){
    int count = 0;
    while(s[0] == '0') s.erase(0,1);
    For(i,0,s.length()){
        if(isdigit(s[i])) count++;
        else return 0;
    }
    if(count > 10) return 0;
    return 1;
}

int Num(string s){
    int ans = 0;
    For(i,0,s.size()){
        ans = ans*10 + (s[i]-'0');
    }
    return ans;
}

int main(){
    ifstream file("VANBAN.in");
    ll res = 0;
    while(!file.eof()){
        string s;
        file >> s;
        if(check(s)) res += Num(s);
    }
    cout << res;
    file.close();
}