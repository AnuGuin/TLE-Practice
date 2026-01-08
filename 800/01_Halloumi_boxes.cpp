#include <bits/stdc++.h>
using namespace std;

/*
We need to check if swap is possible 
when the arrays are not equal. For this the value of k
*/

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        vector<long long> v(n);
        for(int long long i = 0; i < n; i++){
            cin >> v[i];
        }

        vector<long long> temp = v;
        sort(temp.begin(), temp.end());
        
        if(temp == v || k > 1){
            cout<<"YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }

    }
    return 0;
}


