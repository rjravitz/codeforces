#include <iostream>
using namespace std;

//Problem Statement: https://codeforces.com/problemset/problem/1395/A

int main(){ 
    int t; cin >> t;
    while(t--){
        int r, g, b, w; cin >> r >> g >> b >> w;
        int odds = 0;
        if(r % 2) odds++;
        if(g % 2) odds++;
        if(b % 2) odds++;
        if(w % 2) odds++;
        if(odds <= 1) {cout << "Yes\n"; continue;}
        if(r == 0  || b == 0 || g == 0){cout << "No\n"; continue;}
        r--; g--; b--; w += 3;
        odds = 0;
        if(r % 2) odds++;
        if(g % 2) odds++;
        if(b % 2) odds++;
        if(w % 2) odds++;
        if(odds <= 1) {cout << "Yes\n"; continue;}
        cout << "No\n";
    }
}