#include <iostream>
#include <string>
using namespace std;

// Problem Statement: https://codeforces.com/problemset/problem/1295/B

int main(){
    int t; cin >> t;
    while(t--){
        int n, x; string s; cin >> n >> x >> s;
        int setbits = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '1') setbits++;
        }
        int balance = s.size() - (2 * setbits);
        bool neg = false;
        if(balance < 0){neg = true; balance *= -1;}
        int ans = 0;
        if(!balance){
            int curr = 0;
            for(int i = 0; i < n; i++){
                if(s[i] == '0') curr++;
                else curr--;
                if(curr == x) ans++;
            }
        } else{
            int target = ((x % balance) + balance) % balance;
            int curr = 0;
            for(int i = 0; i < n; i++){
                if(s[i] == '0') curr++;
                else curr--;
                int c = ((curr % balance) + balance) % balance;
                if(neg && c == target && curr >= x) ans++;
                else if(!neg && c == target && curr <= x) ans++;
            }
        }

        if(!balance && ans) cout << "-1\n";
        else if(!x) cout << ans + 1 << "\n";
        else cout << ans << "\n";
    }
}