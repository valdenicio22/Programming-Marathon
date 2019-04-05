#include <bits/stdc++.h>

using namespace std;

int leds(char letra[]){

    int t = strlen(letra);
    int res=0;
    for(int i=0;i<t;i++){
        if (letra[i] == '1') res += 2;
        else if (letra[i] == '2') res += 5;
        else if (letra[i] == '3') res += 5;
        else if (letra[i] == '4') res += 4;
        else if (letra[i] == '5') res += 5;
        else if (letra[i] == '6') res += 6;
        else if (letra[i] == '7') res += 3;
        else if (letra[i] == '8') res += 7;
        else if (letra[i] == '9') res += 6;
        else if (letra[i] == '0') res += 6;
    }
    return res;
}


int main(){

    int x;
    char frase[110];
    scanf("%d", &x);
    for(int i=0;i<x;i++){
        int res=0;
        scanf("%s", frase);
        res = leds(frase);
        printf("%d leds\n", res);
    }

return 0;
}
