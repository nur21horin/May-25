#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int minElement = *min_element(a.begin(), a.end());
    int countGreater = 0;

    for (int num : a) {
        if (num > minElement) {
            countGreater++;
        }
    }

    cout << countGreater << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}