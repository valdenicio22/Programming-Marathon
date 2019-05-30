#include <bits/stdc++.h>

using namespace std;

map<string, string> mapa;

void func(string temp){
  if(mapa.count(temp)){
    cout << mapa[temp];
  }else cout << temp;
}

int main(){

  int n; cin >> n;
  while(n--){
    int m, n; cin >> m >> n;
    cin.ignore();
    mapa.clear();
    for (int i=0;i<m;i++){
      string chave; getline(cin, chave);
      string valor; getline(cin, valor);
      mapa[chave] = valor;
    }
    string temp;
    for(int i=0;i<n;i++){
      string linha;
      getline(cin, linha);
      for(int j=0;j<linha.length();j++){
        if (linha[j] != ' ') temp+=linha[j];
        else {
          func(temp);
          cout << linha[j];
          temp.clear();
        }
      }
      if(!temp.empty()){
        func(temp);
        temp.clear();
        cout << endl;
      }
    }
    cout << endl;
  }

  return 0;
}
