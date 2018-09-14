#include <stdio.h>

int main (){

char dI[4], dF[4];
int horaI, minutoI, segundoI, diaI;
int horaF, minutoF, segundoF, diaF;

scanf("%s %d",&dI ,&diaI);
scanf("%d : %d : %d",&horaI, &minutoI, &segundoI);
scanf("%s %d",&dF ,&diaF);
scanf("%d : %d : %d",&horaF, &minutoF, &segundoF);

diaF = diaF-diaI;
segundoF = segundoF - segundoI;
minutoF = minutoF - minutoI;
horaF = horaF - horaI;


if (segundoF < 0){
    segundoF += 60;
    minutoF--;
}
if (minutoF < 0){
    minutoF += 60;
    horaF--;
}
if (horaF < 0){
    horaF += 24;
    diaF--;
}

printf("%d dia(s)\n", diaF);
printf("%d hora(s)\n", horaF);
printf("%d minuto(s)\n", minutoF);
printf("%d segundo(s)\n", segundoF);

return 0;
}
