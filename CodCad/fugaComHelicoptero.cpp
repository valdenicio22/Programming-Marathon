#include <bits/stdc++.h>

using namespace std;

int main(){
    int h, p, f, d, i;
    scanf("%d %d %d %d", &h, &p, &f, &d);
    if (d < 0)
    {
        i = f;
        while (5 > 2)
        {
            if(i == h){
                printf("S\n");
                break;
            }
            else if (i == p){
                printf("N\n");
                break;
            }
            if (i == 0) i = 16;
            i -- ;
        }
    }
    else
    {
        i = f;
        while (5 > 2) {
            if(i == h) {
                printf("S\n");
                break;
            }
            else if (i == p) {
                printf("N\n");
                break;
            }
            if (i == 15) i = -1;
            i++ ;
        }
    }
return 0;
}
