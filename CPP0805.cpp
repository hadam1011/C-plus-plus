/*                          HỢP VÀ GIAO CỦA HAI FILE VĂN BẢN
Cho hai file DATA1.in và DATA2.in.
Một từ được định nghĩa là một dãy ký tự liên tiếp không có khoảng trống, dấu tab hay dấu xuống dòng. Tạm thời chưa xét đến các dấu câu trong bải toán này.
Hãy viết chương trình liệt kê hợp và giao của hai tập từ khác nhau trong hai file.
Các từ được liệt kê theo thứ tự từ điển.
Input:
Hai file văn bản DATA1.in và DATA2.in, có không quá 200 dòng.

Output:
Hợp và giao của hai tập từ khác nhau trong hai file ban đầu. Mỗi tập trên một dòng, các từ liệt kê theo thứ tự từ điển và cách nhau đúng một khoảng trống
VD: DATA1.in 
lap trinh huong doi tuong
ngon ngu lap trinh C++
DATA2.in
lap trinh co ban
lap trinh huong thanh phan
=>
ban c++ co doi huong lap ngon ngu phan thanh trinh tuong
huong lap trinh
*/

#include <bits/stdc++.h>
#include <fstream>

using namespace std;

void Lower(string &s){
    for(int i=0; i<s.size(); i++) 
        s[i] = tolower(s[i]);
}

int main(){
    ifstream file1("DATA1.in");
    ifstream file2("DATA2.in");
    map<string,int> words;
    string s;
    while(file1 >> s){
        Lower(s); 
        words.insert({s,1});
    }
    set<string> res;
    while(file2 >> s){
        Lower(s); 
        if(words.count(s) && words[s] == 1) res.insert(s);
        else words.insert({s,0});
    }
    for(auto x:words) cout << x.first << " ";
    cout << endl;
    for(auto x:res) cout << x << " ";
    file1.close();
    file2.close();
}