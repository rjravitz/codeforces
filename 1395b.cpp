#include <iostream>
using namespace std;

//Problem Statement: https://codeforces.com/problemset/problem/1395/B

int main(){ 
    int n, m, sx, sy; cin >> n >> m >> sx >> sy;
    int rows = 0;
    cout << sx << " " << sy << "\n";
    for(int i = sx; i >= 1; i--){
        if(rows % 2 == 0){
            for(int j = m; j >= 1; j--){
                if(i == sx && j == sy) continue;
                cout << i << " " << j << "\n";
            }
            rows++;
        } else{
            for(int j = 1; j <= m; j++){
                cout << i << " " << j << "\n";
            }
            rows++;
        }
    }
    for(int i = sx + 1; i <= n; i++){
        if(rows % 2 == 0){
            for(int j = m; j >= 1; j--){
                cout << i << " " << j << "\n";
            }
            rows++;
        } else{
            for(int j = 1; j <= m; j++){
                cout << i << " " << j << "\n";
            }
            rows++;
        }
    }
}