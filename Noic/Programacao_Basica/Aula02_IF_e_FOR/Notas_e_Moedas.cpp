#include <bits/stdc++.h>

using namespace std;

int main(){

    int N[] = {100,50,20,10,5,2}, M[] = {50, 25, 10, 5, 1};
    double n;
    int auxN, auxM;
    scanf("%lf", &n);

    auxN = n;
    auxM = (n-auxN)*100;

    cout << "NOTAS:" << endl;
    for(int i=0;i<6;i++){
        int res = auxN/N[i];
        cout << res << " nota(s) de R$ " << N[i] << ".00\n";
        auxN = auxN%N[i];
    }

    cout << "MOEDAS:" << endl;
    cout << auxN << " moeda(s) de R$ 1.00" << endl;
    for(int i=0;i<5;i++){
        int res = auxM/M[i];
        if (i>=3){
            cout << res << " moeda(s) de R$ 0.0" << M[i] << endl;
        }else{
            cout << res << " moeda(s) de R$ 0." << M[i] << endl;
        }
        auxM = auxM%M[i];
    }
return 0;
}
