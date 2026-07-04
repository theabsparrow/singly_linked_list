#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int total_time = 0;
        for (int i = n; i >= m + 1; i--)
        {
            total_time += i;
        }
        cout << total_time << endl;
    }
    return 0;
}