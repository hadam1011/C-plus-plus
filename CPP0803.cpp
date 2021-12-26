/*                          SỐ KHÁC NHAU TRONG FILE
Cho file văn bản DATA.in có không quá 100000 số nguyên dương, giá trị các số nhỏ hơn 1000.
Hãy liệt kê các số khác nhau xuất hiện trong file và số lần xuất hiện của từng số đó.
Input

File DATA.in có không quá 100000 số nguyên dương.
Output

Ghi ra các số khác nhau và số lần xuất hiện theo thứ tự tăng dần
VD:
17 20 25 20 15 10 24 17 25 17 22 11 23 18
14 25 12 10 12 17 21 25
=>  10 2
    11 1
    12 2
    14 1
    15 1
    17 4
    18 1
    20 2
    21 1
    22 1
    23 1
    24 1
    25 4
*/

#include <bits/stdc++.h>
#include <fstream>

using namespace std;

int main(){
    ifstream file("DATA.in");
    int n;
    map<int,int> list;
    while(file >> n){
        if(list.count(n)) list[n]++;
        else list[n] = 1;        
    }
    for(auto x:list) cout << x.first << " " << x.second << endl;
    file.close();
}