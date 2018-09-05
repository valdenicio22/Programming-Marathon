#include <bits/stdc++.h>
#define MAX 99999
using namespace std;

int main(){

    int a, d;

    while(scanf("%d%d", &a, &d) && a+d != 0){
        int va[a], mA=MAX, vd[d];
        for (int i=0;i<a;i++){
            cin >> va[i];
            if (va[i] < mA)
                mA = va[i];
        }
        for (int j=0;j<d;j++)
            cin >> vd[j];
        sort(vd,vd+d);

        if (vd[0] > mA || vd[1] > mA) cout << "Y\n";
        else cout << "N\n";
    }
return 0;
}
