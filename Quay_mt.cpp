#include <iostream>

using namespace std;
#define test() int t; cin >> t; while(t--)
#define For(i,a,b) for(int i=a; i<=b; i++)

void Solve(int a[100][100], int n, int m){
    int h1=1, h2=n, c1=1, c2=m;
    while(h1 < h2 && c1 < c2){
        int tmp=a[h1+1][c1], update;
        For(i,c1,c2){
            update = a[h1][i];
            a[h1][i] = tmp;
            tmp = update;
        }
        h1++;

        For(i,h1,h2){
            update = a[i][c2];
            a[i][c2] = tmp;
            tmp = update;
        }
        c2--;

        if(h1 <= h2){
            for(int i=c2; i>=c1; i--){
                update = a[h2][i];
                a[h2][i] = tmp;
                tmp = update;        
            }
            h2--;
        }

        if(c1 <= c2){
            for(int i=h2; i>=h1; i--){
                update = a[i][c1];
                a[i][c1] = tmp;
                tmp = update;
            }
            c1++;
        }
    }   
    For(i,1,n){
        For(j,1,m)
            cout << a[i][j] << " ";
    }
    cout << endl;
}

int main(){
    test(){
        int n,m,a[100][100];
        cin >> n >> m;
        For(i,1,n) For(j,1,m) cin >> a[i][j];
        Solve(a,n,m);
    }
}