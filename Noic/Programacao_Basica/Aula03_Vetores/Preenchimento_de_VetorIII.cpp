#include <bits/stdc++.h>

using namespace std;

int main()
{
    double n,v[1000];
    cin >> n;
    cout.precision(4);
    cout.setf(ios::fixed);
    for (int i=0;i<100;i++)
    {
        v[i] = n;
        cout << "N[" << i << "] = " << v[i] << endl;
        n = n/2;

    }

return 0;
}
