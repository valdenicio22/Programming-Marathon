#include <bits/stdc++.h>
#define MAXN 1010
using namespace std;

int grid[MAXN][MAXN];
int visited[MAXN][MAXN];
int n, d;

int fora(int i, int j){
  return i<0;i>=n
}

void dfs(int i, int j){

}

int main(){

  int ini_i, ini_j;
  cin >> n >> d;
  while(n--){
    int a,b;
    cin >> a >> b;
    ini_i = a; ini_j = b;
    grid[a][b] = 1;
  }

  dfs(ini_i, ini_j);

  return 0;
}
