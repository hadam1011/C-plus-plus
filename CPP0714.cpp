/*                          HOÁN VỊ LIỀN KỀ PHÍA TRƯỚC
Cho số tự nhiên N và một hoán vị X[] của 1, 2, .., N. Nhiệm vụ của bạn là đưa ra hoán vị trước đó của X[]. Ví dụ N=5, X[] = {1, 2, 3, 4, 5} thì hoán vị trước đó của X[] là {5, 4, 3, 2, 1}.
Input:
Dòng đầu tiên đưa vào số lượng test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất là số N; dòng tiếp theo đưa vào hoán vị X[] của 1, 2, .., N.
T, N, X[] thỏa mãn ràng buộc: 1≤T≤100; 1≤ N≤103.
Input đảm bảo không có trường hợp hoán vị đã cho là đầu tiên (tức là luôn có hoán vị trước nó)
Output:
Đưa ra kết quả mỗi test theo từng dòng.
VD:
2
5 
1 2 3 5 4
=>1 2 3 4 5
5
5 4 3 2 1
=>5 4 3 1 2
*/

#include<iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <vector>

#define For(i,a,b) for(int i=a; i<b; i++)
#define testcase() int t; cin >> t; while(t--)

using namespace std;

void Solve(int a[], int n){
    int pos,max;
    for(int i=n-2; i>=0; i--){ // tìm vị trí đầu tiên(pos) từ cuối lên mà a[i] > a[i+1]
        if(a[i] > a[i+1]){
            pos = i;
            break;
        }
    }
    max = pos+1;
    For(i,pos+1,n){ // tìm vị trí j lớn nhất sao cho a[j] < a[pos] 
        if(a[i]<a[pos] && a[i]>a[max]) max = i;
    }
    swap(a[max],a[pos]);  // đổi chỗ a[j] và a[pos]
    int r=n-1, l=pos+1;
    while(l < r){ // lật ngược các phần từ trong đoạn [pos+1;n-1]
        swap(a[l],a[r]);
        l++; r--;
    }
    For(i,0,n) cout << a[i] << " ";
    cout << endl;
}

int main(){
    testcase(){
        int n; cin >> n;
        int a[n];
        For(i,0,n) cin >> a[i];
        Solve(a,n);
    }
}