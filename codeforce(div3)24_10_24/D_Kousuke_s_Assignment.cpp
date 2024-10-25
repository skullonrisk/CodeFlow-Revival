#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    int t;
    cin >> t;  

    while (t--) {
        int n;
        cin >> n;  
        vector<int> a(n);

        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        unordered_set<long long> prefix_sums;
        long long prefix_sum = 0;
        int beautiful_segments = 0;

       
        prefix_sums.insert(0);

        for (int i = 0; i < n; ++i) {
            prefix_sum += a[i];

            if (prefix_sums.count(prefix_sum)) {
                ++beautiful_segments;
                prefix_sums.clear(); 
                prefix_sums.insert(0);
                prefix_sum = 0;  
            } else {
                prefix_sums.insert(prefix_sum);
            }
        }

        cout << beautiful_segments << endl;
    }

    return 0;
}
