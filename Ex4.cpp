#include <iostream>
#include <algorithm>

using namespace std;
#define For(i,a,b) for (int i=a; i<b; i++)

void In(int a[30][30], int n){
    For(i,0,n){
        For(j,0,n) 
            cout << a[i][j] << " ";
        cout << endl;       
    }
}

void Solve(int a[], int n){
    int res[30][30], count=0;
    int hang_dau=0, hang_cuoi=n, cot_dau=0, cot_cuoi=n;
    while(count < n*n){
        For(i,cot_dau,cot_cuoi) res[hang_dau][i] = a[count++];
        hang_dau++;
		
        For(i,hang_dau,hang_cuoi) res[i][cot_cuoi-1] = a[count++];
        cot_cuoi--;
        
        for(int i=cot_cuoi-1; i>=cot_dau; i--) res[hang_cuoi-1][i] = a[count++];
        hang_cuoi--;

        for(int i=hang_cuoi-1; i>=hang_dau; i--) res[i][cot_dau] = a[count++];
        cot_dau++;
    }
    In(res,n);
}

int main(){
    int n,a[500]; cin >> n;
    For(i,0,n*n) cin >> a[i];
    sort(a,a+n*n);
    Solve(a,n);
}