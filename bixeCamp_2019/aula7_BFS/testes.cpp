#include <bits/stdc++.h>
#define MAXN 55
using namespace std;

char grid[MAXN][MAXN];

int res = 0;
int h, w;

int main(){
  while (cin >> h >> w && h + w) {
      for(int i = 0; i < h; i++){
          cin >> grid[i];
      }
      int ans = INT_MIN;
      for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
          cout << grid[i][j] << endl;
        }
    }
  }
return 0;
}
