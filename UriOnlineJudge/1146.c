#include <stdio.h>

int main(){

    int x, i;
    while(scanf("%d", &x) && x > 0){
        for(i=1;i<=x;i++){
            if(i==x) printf("%d\n", i);
            else printf("%d ", i);
        }
    }
return 0;
}
