#include <bits/stdc++.h>

using namespace std;

int main(){

    double a,b, m;
    scanf("%lf%lf", &a, &b);
    m = (a+b)/2;
    if (m >= 7)
        cout << "Aprovado" << endl;
    else if (m >=4)
        cout << "Recuperacao" << endl;
    else
        cout << "Reprovado" << endl;

return 0;
}
