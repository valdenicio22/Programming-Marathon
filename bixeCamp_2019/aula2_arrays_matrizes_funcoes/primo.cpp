#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    scanf("%d", &n);
    if (n == 1){
        cout << "N" << endl;
        return 0;
    }
    for(int i=2;i*i<n;i++){
        if(n%i==0){
            cout << "N" << endl;
            return 0;
        }
    }
    cout << "S" << endl;

return 0;
}
