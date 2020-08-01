#include <iostream>
using namespace std;

//Problem Statement: https://codeforces.com/problemset/problem/1388/B

int main(){ 
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int ans = n/4;
        if(n % 4) ans++;
        for(int i = 0; i < n - ans; i++){
            cout << "9";
        }
        for(int i = 0; i < ans; i++){
            cout << "8";
        }
        cout << "\n";
    }
}