#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        long int n;
        cin >> n;
        vector<long long> v;
        for(long int i=0; i<n; i++){
            long long x;
           cin >> x;
           v.push_back(x); 
        }
        int count = 0;
        for(long int i=0; i<n; i++){
            if(v[i]) cout << v[i] << " ";
            else count++;
        }
        for(long int i=0; i<count; i++){
            cout << "0" << " ";
        }
        cout << endl;
    }
}
