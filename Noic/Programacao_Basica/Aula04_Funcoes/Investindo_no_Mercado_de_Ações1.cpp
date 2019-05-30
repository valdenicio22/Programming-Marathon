#include <bits/stdc++.h>
//#define MAXN 1000005
using namespace std;

int n, k;
//int memo[MAXN];

int investment(int n){

  if (n <= k) return 1;
  return investment(n/2) + investment((n/2)+(n%2));

}

int main(){

    while(cin >> n >> k && n+k != 0){
        //memset(memo, -1, sizeof(int));
        cout << investment(n) << endl;
    }

return 0;
}
