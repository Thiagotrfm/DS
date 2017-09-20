#include <bits/stdc++.h>

using namespace std;

long somarDigitos(String numero){
	int conta = 0;
	for(unsigned int i=0; i<numero.size(); i++)
		conta += numero[i]-'0';
	return 0;
}

int main(){
	String numero;
	long somaDosDigitos;

	cin >> numero;
	
	somaDosDigitos = somarDigitos(numero);
	return 0;
}
