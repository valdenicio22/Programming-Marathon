#include <bits/stdc++.h>

using namespace std;

void print(string v[], int t){
    for(int k=0;k<t-1;k++){
        cout << v[k] << " ";
    }cout << v[t-1] << endl;
}

void sorting(string v[], int t){

    for(int i=0;i<t-1;i++){
        for(int j=0;j<t-i-1;j++){
            if (v[j].length() < v[j+1].length())
                swap(v[j], v[j+1]);
        }
    }
}

int main(){

    int x;
    cin >> x;
    string s[55];
    for(int i=0;i<x;i++){
        int j=0;
        while(1){
            cin >> s[j];
            j++;
            int c = getchar();
            if (c == '\n') break;
        }

        sorting(s,j);
        print(s, j);
    }

return 0;
}
