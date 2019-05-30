#include <bits/stdc++.h>

using namespace std;

struct rena{

    string nome;
    int peso, idade;
    double altura;
};

bool comp (rena x, rena y){

    if (x.peso != y.peso) return x.peso>y.peso;
    if (x.idade != y.idade) return x.idade<y.idade;
    if (x.altura != y.idade) return x.altura<y.altura;
    return x.nome < y.nome;

}

int main(){

    int x, qtdR, r, cont=1;
    cin >> x;
    while(x--){
        cin >> qtdR >> r;
        rena renas[qtdR];
        for(int i=0;i<qtdR;i++){
            cin >> renas[i].nome;
            cin >> renas[i].peso;
            cin >> renas[i].idade;
            cin >> renas[i].altura;
        }
        sort(renas, renas+qtdR, comp);

        printf("CENARIO {%d}\n", cont++);
        for(int i=0;i<r;i++){
            cout << i+1 << " - " << renas[i].nome << endl;
        }
    }
return 0;
}
