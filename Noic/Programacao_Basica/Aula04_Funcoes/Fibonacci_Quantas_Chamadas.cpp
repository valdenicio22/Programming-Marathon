#include <bits/stdc++.h>

using namespace std;

int cont=-1;
int fib(int x){
    cont++;
    if (x == 1) return 1;
    if (x == 0) return 0;
    return fib(x-1) + fib(x-2);
}


int main(){

    int x, n;
    cin >> x;
    while(x--){
        cont=-1;
        cin >> n;
        printf("fib(%d) = %d calls = %d\n", n, cont, fib(n));
    }
return 0;
}
