
#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<=b; i++)

const ll MOD = 1e9+7;
int n;

void Cuon_1(int a[50][50]){
    int i_bd = 4*n/2 + 1, j_bd = 4*n/2;
    int st = 2;
    while(1){
        if(i_bd > j_bd){
            for(int i=i_bd; i>i_bd-st; i--) cout << a[i][j_bd] << " ";
            i_bd -= st;
            for(int j=j_bd; j<j_bd+st; j++) cout << a[i_bd][j] << " ";
            j_bd += st;
        }else{
            for(int i=i_bd; i<i_bd+st; i++) cout << a[i][j_bd] << " ";
            i_bd += st;
            if(i_bd > n*4) break;
            for(int j=j_bd; j>j_bd-st; j--) cout << a[i_bd][j] << " ";
            j_bd -= st;            
        }
        st += 2;
    }
}

void Cuon_2(int a[50][50]){
    int j_bd = 4*n/2 + 1, i_bd = 4*n/2;
    int st = 2;    
    while(1){
        if(i_bd > j_bd){
            for(int i=i_bd; i>i_bd-st; i--) cout << a[i][j_bd] << " ";
            i_bd -= st;
            if(i_bd < 1) break;
            for(int j=j_bd; j<j_bd+st; j++) cout << a[i_bd][j] << " ";
            j_bd += st;
        }else{
            for(int i=i_bd; i<i_bd+st; i++) cout << a[i][j_bd] << " ";
            i_bd += st;
            for(int j=j_bd; j>j_bd-st; j--) cout << a[i_bd][j] << " ";
            j_bd -= st;            
        }
        st += 2;        
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n;
        int a[50][50], cnt = 1;
        For(i,1,n*4) For(j,1,n*4) a[i][j] = cnt++;
        Cuon_1(a); 
        cout << endl;
        Cuon_2(a);
    }
}   

