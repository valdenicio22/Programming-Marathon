#include <stdio.h>
#define MAX 50

int fib(int x){
    if (x == 0) return 0;
    if (x == 1 || x ==2) return 1;
    return fib(x-1)+fib(x-2);
}

int main(){
    int n, i;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        if (i==n-1) printf("%d\n", fib(i));
        else printf("%d ", fib(i));
    }
return 0;
}
