#include <iostream>
using namespace std;
int n1;
int n2;
int n3;

void ingresarDatos() {
	cout << "Ingresa numéro 1"<<endl;
	cin >> n1;
	cout << "Ingresa numéro 2"<<endl;
	cin >> n2;
	cout << "Ingresa numéro 3"<<endl;
	cin >> n3;
}

void imprimirResultados(int mayor, int menor) {
	cout << "El número mayor es: "<<mayor<<" y el menor es: "<<menor<<endl;
}

void comparar() {
	if (n1>n2 && n1>n3) {
		if (n2<n3) {
			imprimirResultados(n1,n2);
		}else {
			imprimirResultados(n1,n3);
		}
	}else if (n2>n1 && n2>n3) {
		if (n1<n3) {
			imprimirResultados(n2,n1);
		}else {
			imprimirResultados(n2,n3);
		}
	}else if (n3>n1 && n3>n2) {
		if (n1<n2) {
			imprimirResultados(n3,n1);
		}else {
			imprimirResultados(n3,n2);
		}
	}
}

int main() {
	ingresarDatos();
	comparar();
	return 0;
}
