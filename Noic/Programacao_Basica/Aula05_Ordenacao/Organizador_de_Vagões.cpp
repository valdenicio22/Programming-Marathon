#include <bits/stdc++.h>

using namespace std;

int v[55];

int bubbleSort(int v[], int t){

    int cont=0;
    for(int i=0;i<t;i++){
        for(int j=i+1;j<t;j++){
            if (v[i] > v[j]){
                swap(v[i], v[j]);
                cont++;
            }
        }
    }
    return cont;
}

int main(){

    int x, n;
    cin >> x;
    while(x--){
        cin >> n;
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        printf("Optimal train swapping takes %d swaps.\n", bubbleSort(v, n));
    }

return 0;
}
