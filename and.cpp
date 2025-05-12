#include <iostream>
using namespace std;

int findMaxK(int n) {
    int k = 1;
    while (k * 2 <= n) {
        k *= 2;
    }
    return k - 1; 
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << findMaxK(n) << endl;
    }
    return 0;
}