#include <stdio.h>

int main(){

    int i, x;
    scanf("%d", &x);
    for (i = 1;i<=x+12;i++){
        if (i%2==1)
            if (i>x)
                printf("%d\n", i);
    }

return 0;
}
