#include <bits/stdc++.h>

using namespace std;

int main(){
  map<string, int> mapa;
  int m, n;
  string chave;
  int valor;
  while(cin >> m >> n){
    for(int i=0;i<m;i++){
      cin >> chave >> valor;
      mapa[chave] = valor;
    }
    for(int j=0;j<n;j++){
      string palavra;
      int sum=0;
      while(cin >> palavra && palavra != "."){
        if (mapa[palavra])
          sum+=mapa[palavra];
      }
      cout << sum << endl;
    }
  }



  return 0;
}
