#include <bits/stdc++.h>
using namespace std;

void test() {
    int n;
    cin >> n;
    int arr[n];

    // Input the array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Step 1: Compute prefix sum in O(n) time
    int Pre[n];
    Pre[0] = arr[0];
    for (int i = 1; i < n; i++) {
        Pre[i] = Pre[i - 1] + arr[i];
    }

    // Step 2: Compute suffix sum in O(n) time
    int Pos[n];
    Pos[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        Pos[i] = Pos[i + 1] + arr[i];
    }

    // Step 3: Find the index with minimum (prefix + suffix) sum in O(n) time
    int minSum = INT_MAX;
    int index = -1;

    for (int i = 0; i < n; i++) {
        int totalSum = Pre[i] + Pos[i];
        if (totalSum < minSum) {
            minSum = totalSum;
            index = i + 1;  // 1-based indexing
        }
    }

    cout << index << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test();
    }
}
