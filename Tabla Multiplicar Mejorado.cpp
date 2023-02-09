#include <iostream>
using namespace std;
int num;

void multiplo() {
	for(int i=1; i<11; i++) {
		int resultado= i*num;
			cout<<num<<" x "<< i <<" = "<<resultado<<endl;
	}
}

void ingresar() {
	cout << "Número para tabla de multiplicar: ";
	cin >> num;
}

int main() {
	ingresar();
	multiplo();
	return 0;
}
