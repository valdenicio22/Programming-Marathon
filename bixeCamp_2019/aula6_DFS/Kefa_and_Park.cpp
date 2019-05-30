#include <bits/stdc++.h>
#define MAXN 100005
#define pb push_back
using namespace std;

int cats[MAXN];
vector<int> adj[MANX];

int main(){

  int n, k;
  for(int i=0;i<n;i++){
    cin >> cats[i];
  }

  for(int i=1;i<=n;i++){
    int a, b; cin >> a >> b;
    adj[a].pb(b);
    adj[b].pb(a);
  }

  



  return 0;
}
