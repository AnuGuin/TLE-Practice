#include <bits/stdc++.h>
using namespace std;


vector<int> solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    vector<int> ans;
    ans.push_back(v[0]);

    for(int i = 1; i < n; i++){
        if(v[i] >= v[i-1]) {
            ans.push_back(v[i]);
        } else {
            ans.push_back(v[i]);
            ans.push_back(v[i]);
        }
    }
    
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        vector<int> result = solve();
        cout << result.size() << "\n";
        for (int x : result) {
            cout << x << " ";
        }
        cout << '\n';
    }

    return 0;
}

