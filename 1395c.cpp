#include <iostream>
#include <vector>
using namespace std;

//Problem Statement: https://codeforces.com/problemset/problem/1395/C
 
int main(){ 
    int n, m; cin >> n >> m;
    vector<int> a(n); vector<int> b(m);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];
    vector<vector<int>> v(n, vector<int>(m, 0));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            v[i][j] = a[i] & b[j];
        }
    }
    for(int i = 0; i < (1 << 9); i++){
        bool b = false;
        for(int j = 0; j < n; j++){
            b = false;
            for(int k = 0; k < m; k++){
                if((i | v[j][k]) == i) {b = true; break;}
            }
            if(!b) break;
        }
        if(!b) continue;
        else{cout << i << "\n"; break;}
    }
}