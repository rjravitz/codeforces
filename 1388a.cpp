#include <iostream>
using namespace std;

//Problem Statement: https://codeforces.com/problemset/problem/1388/A

int main(){ 
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int sum = 6 + 10 + 14 + 15;
        int ans[4] = {6, 10, 14, 15};
        if(n <= 6 + 10 + 14) cout << "NO\n";
        else{
            cout << "YES\n";
            int other = 0; bool b = true;
            for(int i = 0; i < 4; i++){
                b = true;
                int sum1 = sum - ans[i];
                int rem = n - sum1;
                if(rem <= 0) continue;
                for(int j = 0; j < 4; j++){
                    if(i != j && ans[j] == rem) b = false;
                }
                if(b){
                    for(int j = 0; j < 4; j++){
                        if(i == j) cout << rem << " ";
                        else cout << ans[j] << " ";
                    }
                    cout << "\n"; break;
                }
            }
            
        }
    }
}