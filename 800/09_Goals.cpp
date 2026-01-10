#include <bits/stdc++.h>
using namespace std;

/* 
0 - sum 
*/

long long solve() {
    int n;
    cin >> n;

    long long sum = 0;
    for(int i = 0; i < n - 1; i++){
        int x;
        cin >> x;
        sum += x;
    }

    long long ans = 0 - sum;
    return ans;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        cout <<solve() << endl;

    }
    return 0;
}


