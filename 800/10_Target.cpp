#include <bits/stdc++.h>
using namespace std;


const vector<vector<int>> board = {
    {1,1,1,1,1,1,1,1,1,1},
    {1,2,2,2,2,2,2,2,2,1},
    {1,2,3,3,3,3,3,3,2,1},
    {1,2,3,4,4,4,4,3,2,1},
    {1,2,3,4,5,5,4,3,2,1},
    {1,2,3,4,5,5,4,3,2,1},
    {1,2,3,4,4,4,4,3,2,1},
    {1,2,3,3,3,3,3,3,2,1},
    {1,2,2,2,2,2,2,2,2,1},
    {1,1,1,1,1,1,1,1,1,1}
};

int solve() {
    vector<vector<char>> v(10, vector<char>(10));
    for(int i = 0; i < 10; i++){
        string s;
        cin >> s;
        for(int j = 0; j < 10; j++){
            v[i][j] = s[j];
        }
    }
    int total = 0;

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(v[i][j] == 'X'){
                total += board[i][j];
            }
        }
    }
    return total;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        cout << solve() << endl;

    }
    return 0;
}


