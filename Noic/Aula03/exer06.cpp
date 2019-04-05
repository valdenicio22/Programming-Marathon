#include <bits/stdc++.h>

using namespace std;

int main(){

    int par[5],contP=0,impar[5],contI=0;
    int x;
    for(int i=0; i<15; i++){
        scanf("%d", &x);
        if (x%2 == 0) {
            par[contP] = x;
            contP++;
        }else{
            impar[contI] = x;
            contI++;
        }
        if (contP == 5){
            for(int j=0;j<5;j++) printf("par[%d] = %d\n", j, par[j]);
            contP = 0;
        }else if (contI == 5){
            for(int j=0;j<5;j++) printf("impar[%d] = %d\n", j, impar[j]);
            contI = 0;
        }
    }
    if (contI != 0){
        for(int j=0;j<contI;j++) printf("impar[%d] = %d\n", j, impar[j]);
            contI = 0;
    }
    if (contP != 0){
        for(int j=0;j<contP;j++) printf("par[%d] = %d\n", j, par[j]);
            contP = 0;
    }

return 0;
}
