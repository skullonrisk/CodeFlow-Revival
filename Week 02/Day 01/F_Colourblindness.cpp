#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
void test()
{
    int n;
    cin >> n;
    char arr[2][n];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[1][i] == arr[0][i] || abs(arr[1][i] - arr[0][i]) == 5)
            count++;
    }
    if (count == n)
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";

    // cout<<abs('b'-'g');
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