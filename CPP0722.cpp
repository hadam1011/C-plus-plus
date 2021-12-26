#include <iostream>
#include <string>
#include <vector>

using namespace std;
using ll = long long;
#define For(i,a,b) for(int i=a; i<b; i++)

string Sum(string s1, string s2){
	vector<int> tmp;
	if(s1.length() < s2.length()){
		int count = s2.length()-s1.length();
		s1.insert(0,count,'0');
	}else{
		int count = s1.length()-s2.length();
		s2.insert(0,count,'0');
	}
	int len=s1.length(), nho=0;
	for(int i=len-1; i>=0; i--){
		int a = s1[i] - '0';
		int b = s2[i] - '0';
		if(a+b+nho < 10 && i > 0){
			tmp.push_back(a+b+nho);
			nho = 0;
		}else if(a+b+nho > 9 && i > 0){
			tmp.push_back(a+b+nho-10);
			nho = 1;
		}
		if(i == 0){
			tmp.push_back(a+b+nho);
		}
	}
    string res = "";
	for(int i=tmp.size()-1; i>=0; i--){
		res += to_string(tmp[i]);
	}
    return res;
}

string Mul(string a, string b){
    int *res;
    res = new int[a.size()+b.size()]();
    for(int i=a.size()-1; i>=0; i--){
        for(int j=b.size()-1; j>=0; j--){
            res[i+j+1] += (a[i]-'0') * (b[j]-'0');
        }
    }

    for(int i=a.size()+b.size()-1; i>=0; i--){
        if(res[i] > 9){
            res[i-1] += res[i]/10;
            res[i] %= 10;
        }
    }
    string tmp = "";
    For(i,0,a.size()+b.size()) tmp += to_string(res[i]);
    delete[] res;
    while(tmp[0]=='0' && tmp.length()>1) tmp.erase(0,1);
    return tmp;
}

void Solve(string C[], int n){
    string sum;
    for(int i=2; i<=n+1; i++){
        sum = "";
        int l=0, r=i-1;
        while(l < i/2){
            string tmp = Mul(C[l],C[r]);
            tmp = Sum(tmp,tmp);
            sum = Sum(sum,tmp);
            l++; 
            r--;
        }
        if(i%2) sum = Sum(sum,Mul(C[l],C[l]));
        C[i] = sum;
    }
    cout << C[n+1];
}

int main(){
    int n; 
    cin >> n;
    string C[5000];
    C[0] = "1";
    C[1] = "1";
    Solve(C,n);
}