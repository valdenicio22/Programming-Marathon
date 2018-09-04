#include <bits/stdc++.h>
using namespace std;

void BubbleSort (double v[]){

    double aux;
    for (int i=0;i<5;i++){
        for (int j=0;j<4;j++){
            if (v[j] > v[j+1]){
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
}

int main(){

    double v[100], res=0;
    for (int i=0;i<5;i++)
        cin >> v[i];
    BubbleSort(v);
    for (int i=1;i<4;i++)
        res += v[i];
    printf("%.1lf\n", res);

return 0;
}
