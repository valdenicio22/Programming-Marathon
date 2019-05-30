#include <bits/stdc++.h>

using namespace std;

int main(){

  int n;
  cin >> n;
  int value[n+5], meat[n+5];

  for(int i=0;i<n;i++) cin >> meat[i] >> value[i];

  int save = meat[0];
  int idMin=0, res = 0;

  for(int i=1;i<n;i++){
    if (value[i] < value[idMin]){
      res += value[idMin] * save;
      idMin = i;
      save = meat[i];
    }else{
      save += meat[i];
    }
  }
  res += value[idMin] * save;
  cout << res << endl;

  return 0;
}
