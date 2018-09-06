#include <bits/stdc++.h>

using namespace std;

int main(){

    int qtd, v, n1, n2, cont=0;
    cin >> qtd >> v;
    for (int i=0;i<qtd;i++){
        cin >> n1 >> n2;
        if ((n1+n2) >= v) cont++;
    }
    cout << cont << endl;

return 0;
}
