#include <bits/stdc++.h>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;
void test()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    set<int> distinct;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        distinct.insert(arr[i]);
    }
    int count = distinct.size();

    if ((n - count) % 2 == 1)
        cout << count - 1 << "\n";
    else
        cout << count << "\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        test();
    }
}