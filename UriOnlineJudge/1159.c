#include <stdio.h>

int main(){

    int x,i, s=0;
    while(scanf("%d", &x) && x != 0){
        s=0;
        if(x%2!=0)
            x++;
        for(i=0;i<5;i++, x+=2)
            s+=x;
        printf("%d\n",s);
    }

return 0;
}
