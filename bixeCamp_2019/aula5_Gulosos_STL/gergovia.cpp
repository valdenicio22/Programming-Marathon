#include <bits/stdc++.h>

using namespace std;
typedef long long  ll;

int main(){

  int n;
  while(cin >> n && n){
    queue<int> fc;
    queue<int> fv;
    int wines[n+5];
    for(int i=0;i<n;i++){
      cin >> wines[i];
      if (wines[i] > 0) fc.push(i);
      else{
        wines[i] *= -1;
        fv.push(i);
      }
    }
    ll res = 0;
    while(!fc.empty() || !fv.empty()){
      int idC = fc.front();
      int idV = fv.front();
      int menor;
      if (wines[idC] > wines[idV]){
        menor = wines[idV];
        wines[idC] -= menor;
        fv.pop();
      }else if (wines[idC] < wines[idV]){
        menor = wines[idC];
        wines[idV] -= menor;
        fc.pop();
      }else{
        menor = wines[idC];
        fv.pop();
        fc.pop();
      }
      res += menor * abs(idC-idV);
    }
    cout << res << endl;
  }
  return 0;
}
