#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    while (cin >> n, n != 0)
    {
        vector<int> o(n), t(n);
        for (int i = 0; i < n; ++i)
            cin >> o[i] >> t[i];

        sort(o.begin(), o.end());
        sort(t.begin(), t.end());

        if (o == t)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
