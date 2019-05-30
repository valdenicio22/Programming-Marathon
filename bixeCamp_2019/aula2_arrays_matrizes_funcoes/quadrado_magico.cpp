#include <bits/stdc++.h>

using namespace std;

int main()
{
    int dP=0, dS=0, l=0, c=0;
    int m[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> m[i][j];
        }
        dP += m[i][i];
    }
    for(int i=0, k=3-1;i<3;i++, k--)
    {
        dS += m[i][k];
        l = c = 0;
        for(int j=0;j<3;j++){
            l += m[i][j];
            c += m[j][i];
        }
        if(l != dP || c != dP )
        {
            cout << "NAO" << endl;
            return 0;
        }
    }
    if (dS != dP){
        cout << "NAO" << endl;
        return 0;
    }else cout << "SIM" << endl;

    return 0;
}
