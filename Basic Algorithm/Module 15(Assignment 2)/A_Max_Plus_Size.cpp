#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int max_odd = 0, count_odd = 0;
        for (int i = 0; i < n; i += 2) {
            max_odd = max(max_odd, v[i]);
            count_odd++;
        }
        int max_even = 0, count_even = 0;
        for (int i = 1; i < n; i += 2) {
            max_even = max(max_even, v[i]);
            count_even++;
        }
        int score_odd = max_odd + count_odd;
        int score_even = max_even + count_even;

        cout << max(score_odd, score_even) << endl;
    }

    return 0;
}
