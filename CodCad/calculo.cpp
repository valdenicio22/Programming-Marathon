#include <bits/stdc++.h>

using namespace std;

#define MAX 1010

int x[MAX], y[MAX], aux[MAX];
int main ()
{
    int a, b, vai=0, soma=0;
    cin >> a >> b;
    int tam = max(a,b);
    for (int i=0; i<a; i++)
        cin >> x[i];
    for (int j=0; j<b; j++)
        cin >> y[j];
    for(int i=tam-1; i>=0; i--)
    {
            soma = x[i]+y[i]+vai;
            aux[i] = (soma % 2);
            vai = soma/2;
    }
    while (aux[tam-1] == 0)
            tam--;
    if (vai != 0)
            cout << vai << " ";
        for(int x=0; x < tam-1; x++){
            cout << aux[x] << " ";
        }
        cout << aux[tam-1] << endl;

    return 0;
}
