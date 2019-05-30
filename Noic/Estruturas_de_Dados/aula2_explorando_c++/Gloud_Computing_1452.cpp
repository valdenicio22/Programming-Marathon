#include <bits/stdc++.h>
#define MAXN 210
using namespace std;

int n, m;
set<string> server[MAXN];

int func(int cli_s){

  set<int> adj;
  for(int j=1;j<=cli_s;j++){
    string service; cin >> service;
    for(int k=1;k<=n;k++){
      if (server[k].count(service)){
        adj.insert(k);
      }
    }
  }
  return adj.size();
}

int main(){

  while(cin >> n >> m and n+m){
    for (int y=1;y<=n;y++) server[y].clear();
    for (int i=1;i<=n;i++){
      int q; cin >> q;
      for(int j=1;j<=q;j++){
        string services;
        cin >> services;
        server[i].insert(services);
      }
    }
    int sum=0;
    for (int i=1;i<=m;i++){
      int q; cin >> q;
      sum += func(q);
    }
    cout << sum << endl;
  }

  return 0;
}
