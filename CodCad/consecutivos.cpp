#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, p, cont=1, aux=0, aux2=0;
    scanf("%d", &n);
    cin >> p;
    aux = p;
    for (int i=0;i<n-1;i++){
        cin >> p;
        if (aux == p)
            cont++;
        else{
            if (cont > aux2)
                aux2 = cont;
            cont = 1;
        }
        aux = p;
    }
    if (aux2 >= cont) cout << aux2 << endl;
    else if(cont > aux2) cout << cont << endl;


return 0;
}
