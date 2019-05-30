#include <bits/stdc++.h>
#define MAXN 70
using namespace std;
typedef long long ll;

ll memo[MAXN];

ll fib(int f){
  if (f == 0) return 0;
  if (f == 1 || f == 2) return 1;
  if (memo[f] != -1) return memo[f];
  return memo[f] = fib(f-1) + fib(f-2);
}

int main(){

  memset(memo, -1, sizeof memo);
  int n; cin >> n;
  while(n--){
    int x;
    cin >> x;
    printf("Fib(%d) = %lld\n", x, fib(x));
  }


  return 0;
}
