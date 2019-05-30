#include <bits/stdc++.h>

using namespace std;

vector<int> vec[1000010];
int t, a, b;

int main(){

  int n, m; cin >> n >> m;
  for (int i=0;i<m;i++){
    cin >> t >> a >> b;
    int flag = 0;
    if (t==0){
      for(auto k : vec[a]){
        if (k == b) {
          flag = 1;
          cout << "1" << endl;
          break;
        }
      }
      if (!flag) cout << "0" << endl;
    }else{
      vec[a].push_back(b);
      vec[b].push_back(a);
    }
  }

  return 0;
}
