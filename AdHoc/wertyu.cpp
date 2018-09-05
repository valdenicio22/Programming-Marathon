#include <bits/stdc++.h>

using namespace std;

int main(){
    char x;
    char v[48] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    while(scanf("%c", &x ) != EOF){
        for(int i=0;i<48;i++){
            if (x == v[i]){
                printf("%c", v[i-1]);
                break;
            }
            else if (x == ' '){
                printf(" ");
                break;
            }
            else if (x == '\n'){
                printf("\n");
                break;
            }
        }
    }

return 0;
}
