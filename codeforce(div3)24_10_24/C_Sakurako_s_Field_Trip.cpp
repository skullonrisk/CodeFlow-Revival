#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t;  // Number of test cases

    while (t--) {
        int n;
        cin >> n;  // Length of the line

        vector<int> a(n);  // Array to store the topics of students
        unordered_map<int, int> freq;  // Frequency map to count occurrences of each topic

        // Read the topics and count their frequencies
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            freq[a[i]]++;
        }

        // Calculate the initial disturbance (adjacent pairs with the same topic)
        int initial_disturbance = 0;
        for (int i = 0; i < n - 1; ++i) {
            if (a[i] == a[i + 1]) {
                initial_disturbance++;
            }
        }

        // Find the maximum frequency of any topic
        int max_freq = 0;
        for (const auto& entry : freq) {
            max_freq = max(max_freq, entry.second);
        }

        // Check if it's possible to reduce all disturbances to zero
        if (max_freq > (n + 1) / 2) {
            // If a topic appears too frequently, we cannot eliminate all disturbances
            cout << max(0, initial_disturbance - (max_freq - (n - max_freq))) << endl;
        } else {
            // Otherwise, we can keep the initial disturbance or reduce it
            cout << initial_disturbance << endl;
        }
    }

    return 0;
}
