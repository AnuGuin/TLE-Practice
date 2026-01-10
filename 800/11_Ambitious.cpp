#include <bits/stdc++.h>
using namespace std;

/*
Idea is to find the closest minimum number to zero
Employed a greedy approach of measuring and updating the distance 
in every iteration
*/

int solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < n; i++){
        if(v[i] == 0) {
            return 0;
            break;
        }
    }

    int close_to_0 = INT_MAX;

    for(int i = 0; i < n; i++){
        int dist = abs(0 - v[i]);
        close_to_0 = min(dist, close_to_0);
    }

    return abs(close_to_0);
    

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << solve() << endl;

    return 0;
}


