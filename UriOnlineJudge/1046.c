#include <stdio.h>

int main(){

    int hi, hf;
    scanf("%d%d", &hi, &hf);
    if (hi > hf) printf("O JOGO DUROU %d HORA(S)\n", abs(hi-(hf+24)));
    else if (hi == hf) printf("O JOGO DUROU %d HORA(S)\n", abs(hi-(hf+24)));
    else printf("O JOGO DUROU %d HORA(S)\n", abs(hi-hf));

return 0;
}
