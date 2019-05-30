#include <bits/stdc++.h>

using namespace std;

typedef struct{

    string nome;
    string cor;
    char t;
    int tam;

}Alunos;

bool cmp(Alunos a, Alunos b){
    if (a.cor != b.cor) return a.cor < b.cor;
    if (a.tam != b.tam) return a.tam < b.tam;
    return a.nome < b.nome;
}

int main(){

    int x, cont = 0;

    while(scanf("%d", &x) && x != 0){
        Alunos turma[100];

        for(int i=0;i<x;i++){
            cin.ignore();
            getline(cin, turma[i].nome);
            cin >> turma[i].cor >> turma[i].t;
            if (turma[i].t == 'P') turma[i].tam = 1;
            else if (turma[i].t == 'M') turma[i].tam = 2;
            else if (turma[i].t == 'G') turma[i].tam = 3;
        }

        stable_sort(turma, turma+x, cmp);
        if(cont)cout << endl;
        for(int i=0;i<x;i++){
            cout << turma[i].cor << " " << turma[i].t << " " << turma[i].nome << endl;
        }

        cont++;
    }

return 0;
}
