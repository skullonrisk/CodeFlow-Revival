#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;  

    while (t--) {
        int n;
        cin >> n;  
        vector<vector<int>> matrix(n, vector<int>(n));

       
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> matrix[i][j];
            }
        }

        int total_operations = 0;

        
        for (int start = 0; start < n; ++start) {
            
            int max_negative = 0;
            for (int i = start, j = 0; i < n && j < n; ++i, ++j) {
                if (matrix[i][j] < 0) {
                    max_negative = min(max_negative, matrix[i][j]);
                }
            }
            total_operations += -max_negative;

           
            if (start != 0) {
                max_negative = 0;
                for (int i = 0, j = start; i < n && j < n; ++i, ++j) {
                    if (matrix[i][j] < 0) {
                        max_negative = min(max_negative, matrix[i][j]);
                    }
                }
                total_operations += -max_negative;
            }
        }

        cout << total_operations << endl;
    }

    return 0;
}
