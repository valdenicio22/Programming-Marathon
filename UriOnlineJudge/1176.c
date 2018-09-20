#include <stdio.h>
#define MAX 70
typedef long long ll;

ll memo[MAX];

ll fib(ll v){
    if (v == 0) return 0;
    if (v == 1 || v == 2) return 1;
    if (memo[v] != -1) return memo[v];
    return memo[v] = (fib(v-1) + fib(v-2));

}

int main(){
    memset(memo,-1,sizeof(memo));
    ll x, i, j,v;
    scanf("%lld", &x);
    for(i=0;i<x;i++){
        scanf("%lld", &v);
        printf("Fib(%lld) = %lld\n", v, fib(v));
    }
return 0;
}
