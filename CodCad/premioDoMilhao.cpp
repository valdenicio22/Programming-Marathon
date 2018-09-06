    #include <bits/stdc++.h>

    using namespace std;

    int main(){
        int x, n, s=0, cont=0;
        scanf("%d", &x);
        for (int i=0;i<x;i++){
            scanf("%d", &n);
            s += n;
            cont++;
            if (s >= 1000000){
                cout << cont << endl;
                break;
            }
        }
    return 0;
    }
