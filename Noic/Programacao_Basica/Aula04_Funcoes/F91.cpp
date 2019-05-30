#include <bits/stdc++.h>

using namespace std;

int f91(int x){
    return x >= 101 ? x - 10 : f91(f91(x+11));
}

int main(){

    int n, res;
    while(cin >> n && n != 0){
       printf("f91(%d) = %d\n", n, f91(n));
    }
return 0;
}
