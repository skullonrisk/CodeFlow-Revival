#include <iostream>
#include <algorithm>
using namespace std;
void test() {
    int arr[2];
    for (int i = 0; i < 2; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + 2);
    for (int i = 0; i < 2; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        test();
    }
}