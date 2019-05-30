#include <bits/stdc++.h>

using namespace std;

int main(){

    int x;
    char frase[110];
    scanf("%d", &x);
    for(int i=0;i<x;i++){
        int leds=0;
        scanf("%s", frase);
        int t = strlen(frase);
        for(int j=0;j<t;j++){
            if (frase[j] == '1') leds +=2;
            else if (frase[j] == '2') leds +=5;
            else if (frase[j] == '3') leds +=5;
            else if (frase[j] == '4') leds +=4;
            else if (frase[j] == '5') leds +=5;
            else if (frase[j] == '6') leds +=6;
            else if (frase[j] == '7') leds +=3;
            else if (frase[j] == '8') leds +=7;
            else if (frase[j] == '9') leds +=6;
            else if (frase[j] == '0') leds +=6;
        }
        printf("%d leds\n", leds);
    }

return 0;
}
