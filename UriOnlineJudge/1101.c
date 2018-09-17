#include <stdio.h>

int main(){

    int a, b, i;
    while(scanf("%d%d",&a, &b) && a > 0 && b > 0){
        int sum=0;
        if (a > b){
            i = a;
            a = b;
            b = i;
        }
        for(i=a;i<=b;i++){
            printf("%d ", i);
            sum+=i;
        }
        printf("Sum=%d\n", sum);
    }

return 0;
}
