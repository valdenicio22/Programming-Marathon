#include <bits/stdc++.h>

using namespace std;

int main(){

    string l, aux;
    cin >> l;
    for(int i=0;i<l.length();i++){
            if (l[i] == 'a' || l[i] == 'e' || l[i] == 'i' || l[i] == 'o' || l[i] == 'u'){
                aux += l[i];
        }
    }
    int fim = aux.length();
    for(int i=0;i<(aux.length()/2);i++){
        if (aux[fim-1] != aux[i]) {
            cout << "N" << endl;
            return 0;
        }
        fim--;
    }
    cout << "S" << endl;

return 0;
}
