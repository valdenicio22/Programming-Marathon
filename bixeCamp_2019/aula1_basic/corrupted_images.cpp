#include <bits/stdc++.h>

using namespace std;

int main(){

    int x, l,c;
    cin >> x;
    char num;
    while(x--){
        int num1=0, num0=0;
        cin >> l >> c;
        for(int i=0;i<l;i++){
            for(int j=0;j<c;j++){
                cin >> num;
                if(i==0 || j == 0 || j == c-1 || i == l-1) {
                    if (num == '0') {
                        num0++;
                    }
                }else if(num == '1') num1++;
            }
        }
        if (num0 == 0 ) cout << "0" << endl;
        else if (num1 >= num0) cout << num0 << endl;
        else cout << "-1" << endl;
    }

return 0;
}
