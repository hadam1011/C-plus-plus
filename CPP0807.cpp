/*                        LỚP INTSET
Trong lý thuyết tập hợp, một tập hợp chỉ được phép chứa các giá trị phân biệt và luôn luôn lưu các giá trị theo thứ tự tăng dần.
Khai báo lớp IntSet và viết các phương thức để thực hiện các thao tác trên tập hợp số nguyên. Sử dụng lớp IntSet để in ra tập hợp các số nguyên là giao của hai tập số trong 2 dãy ban đầu.
Input - file văn bản DATA.in
Dòng đầu ghi 2 số n và m (1 < n,m <100).
Dòng thứ 2 ghi n số của a[].
Dòng thứ 3 ghi m số của b[].
Các số đều dương và nhỏ hơn 1000. 
Output
Ghi tập giao của A và B trên một dòng theo thứ tự từ nhỏ đến lớn. 
VD:
DATA.in
5 6
1 2 3 4 5
3 4 5 6 7 8
=> 3 4 5
*/
#include <bits/stdc++.h>
#include <fstream>

using namespace std;
#define For(i,a,b) for(int i=a; i<b; i++)

void Solve(int a[], int n, int b[], int m){
    sort(a,a+n);
    sort(b,b+m);
    set<int> res;
    set<int> check;
    For(i,0,n) res.insert(a[i]);
    For(i,0,m){
        if(res.count(b[i]) && !check.count(b[i])){
            check.insert(b[i]);
            cout << b[i] << " ";
        }
    }
}

int main(){
    ifstream file("DATA.in");
    int n,m,a[100],b[100];
    file >> n;
    file >> m;
    For(i,0,n) file >> a[i];
    For(i,0,m) file >> b[i];
    Solve(a,n,b,m);
    file.close();
}