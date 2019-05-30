#include <bits/stdc++.h>

using namespace std;

int main(){

  string s;
  int n, aux=1;
  cin >> n;
  cin.ignore();
  cin.ignore();

  while(n--){

    map<string, double> trees;
    int cont=0;
    if (aux != 1) cout << endl;
    //while(getline(cin , s) && s[0] != '\0')
    //  while(getline(cin, s), s != ""){
    while(getline(cin, s) && s.size() != 0){
      trees[s]++;
      cont++;
    }

    for(auto it : trees){
      cout << fixed << setprecision(4);
      cout << it.first << " " << it.second*100.0/cont << endl;
    }
    aux++;
  }

  return 0;
}
