#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;
 
    int cnt = 0;
    
    //Append until x is at least as long as s
    while (x.length() < s.length()) {
        x += x;
        cnt++;
    }
 
    //Check if s is in x immediately after length requirement is met
    if (x.find(s) != string::npos) {
        cout << cnt << endl;
        return;
    }
 
    //Append one last time to cover cases where s spans across the concatenation point
    x += x;
    cnt++;
    
    if (x.find(s) != string::npos) {
        cout << cnt << endl;
        return;
    }
 
    cout << -1 << endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
 
    }
    return 0;
}
 
