#include <iostream>
using namespace std;

int main() {
	int n1;
	int n2;
	int n3;

	cout << "Ingresa numéro 1"<<endl;
	cin >> n1;
	cout << "Ingresa numéro 2"<<endl;
	cin >> n2;
	cout << "Ingresa numéro 3"<<endl;
	cin >> n3;

	if (n1>n2 && n1>n3) {
		cout << "El número mayor es: " << n1 <<endl;
		if (n2<n3) {
			cout << "El número menor es: " << n2 <<endl;
		}else {
		cout << "El número menor es: " << n3 <<endl;
		}
	}else if (n2>n1 && n2>n3) {
		cout << "El número mayor es: " << n2 <<endl;
		if (n1<n3) {
			cout << "El número menor es: " << n1 <<endl;
		}
			cout << "El número menor es: " << n3 <<endl;
	}else if (n3>n1 && n3>n2) {
		cout << "El número mayor es: " << n3 <<endl;
		if (n3<n1) {
			cout << "El número menor es: " << n3 <<endl;
		}
			cout << "El número menor es: " << n1 <<endl;
	}
	return 0;
}
