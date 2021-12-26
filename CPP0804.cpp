/*                                LIỆT KÊ TỪ KHÁC NHAU
Cho file văn bản VANBAN.in.

Một từ được định nghĩa là một dãy ký tự liên tiếp không có khoảng trống, dấu tab hay dấu xuống dòng. Tạm thời chưa xét đến các dấu câu trong bải toán này.
Hãy chuyển tất cả các từ về dạng chữ thường sau đó liệt kê các từ khác nhau xuất hiện trong file VANBAN.in theo thứ tự từ điển.

Input
File VANBAN.in có không quá 200 dòng.
Output
Ghi ra danh sách các từ khác nhau xuất hiện trong file. Mỗi từ trên một dòng theo thứ tự từ điển.
VD:
lap trinh Huong doi tuong
lap trinh Huong thanh phan
=> 
doi
huong
lap
phan
thanh
trinh
tuong
*/

#include <bits/stdc++.h>
#include <fstream>
#include <set>
#include <sstream>

using namespace std;
using ll = long long;
#define For(i,a,b) for(int i=a; i<b; i++) 

int main(){
    ifstream file("VANBAN.in");
    set<string> words;
    while(!file.eof()){
        string s,token;
        getline(file,s);
        stringstream ss(s);
        while(ss >> token){
            For(i,0,token.size()) token[i] = tolower(token[i]);
            words.insert(token);
        }
    }
    for(auto x:words) cout << x << endl;
    file.close();
}

