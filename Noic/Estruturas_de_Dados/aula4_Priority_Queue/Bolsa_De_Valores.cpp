#include <bits/stdc++.h>

using namespace std;

int main(){

  int n;
  while(cin >> n && n){
    priority_queue<double, vector<double>, greater<double>> vendas;
    priority_queue<double> compras;
    double home = 0.0;
    for(int i=0;i<n;i++){
      string str; cin >> str;
      double value; cin >> value;

      if (str == "C") compras.push(value);
      else vendas.push(value);

      if (!compras.empty() && !vendas.empty()){
        if (compras.top() >= vendas.top()){
          home+= compras.top() - vendas.top();
          compras.pop();
          vendas.pop();
        }
      }
    }
    cout << fixed << setprecision(2);
    cout << home << endl;
  }

  return 0;
}
