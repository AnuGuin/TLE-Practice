#include <bits/stdc++.h>
using namespace std;

/* 
We need to find if k appears atleast once in the array 
*/

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    bool seen = false;
    for(int i = 0; i < n; i++){
        if(v[i] == k) seen = true;
    }

    if(seen == true) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }    


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


