#include <iostream>
using namespace std;

int main() {
	int num;
	cout << "Número para tabla de multiplicar: ";
	cin >> num;

	 for(int i=1; i<11; i++)
	    {
	        int resultado= i*num;
	        cout<<num<<" x "<< i <<" = "<<resultado<<endl;
	    }
	return 0;
}
