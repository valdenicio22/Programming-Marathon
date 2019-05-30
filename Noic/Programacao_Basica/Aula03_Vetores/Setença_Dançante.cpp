#include <bits/stdc++.h>

using namespace std;

char frase[60];

char dancingSentence(char p, int i){
	if (i%2==0){
		if (p>='a' && p <='z') return p-32;
		return p;
	}
	else{
		if (p>='A' && p <='Z') return p+32;
		return p;
	}
}

int main(){

	while(scanf("%[^\n]", frase) != EOF){
		cin.ignore();
		int cont = 0;
		for(int i=0;frase[i] != '\0';i++){
			if (frase[i] != ' '){
				frase[i] = dancingSentence(frase[i], cont);
				cont++;
			}
		}
		cout << frase << endl;
	}
return 0;
}
