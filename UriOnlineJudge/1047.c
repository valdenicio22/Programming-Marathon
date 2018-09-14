#include <stdio.h>

int main(){

   int hi, mi, hf, mf, h=0, m=0;
   scanf("%d%d%d%d", &hi, &mi, &hf, &mf);
   if (hf < hi) hf +=24;
   else if (hf == hi && mf <= mi) hf+=24;
   if (mi > mf){
        h=(hf-hi) -1;
        m=(mf-mi) + 60;
   }
   else{
        h=(hf-hi);
        m=(mf-mi);
   }
   printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);

return 0;
}
