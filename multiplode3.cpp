#include <bits/stdc++.h>

using namespace std;

long somarDigitos(string numero){
	int cont = 0;
	for(int i=0; i<(int)numero.size(); ++i){
		int num = numero[i]-48;
		cont+=num;
	}
	return cont;
}

int main(){
	string numero;
	long somaDosDigitos;

	cin >> numero;
	
	somaDosDigitos = somarDigitos(numero);
	return 0;
}
