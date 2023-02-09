#include <iostream>
using namespace std;

int main() {
	int diact,mesact,anioact;
	int dianac,mesnac,anionac;
	int dias,meses;
	cout << "Ingresa día actual"<<endl;
	cin >> diact;
	cout << "Ingresa mes actual"<<endl;
	cin >> mesact;
	cout << "Ingrea año actual"<<endl;
	cin >> anioact;

	cout << "Ingresa día nacimiento"<<endl;
	cin >> dianac;
	cout << "Ingresa mes nacimiento"<<endl;
	cin >> mesnac;
	cout << "Ingresa año nacimiento"<<endl;
	cin >> anionac;

	    if ( diact < dianac  )
	    {
	    	diact = dianac + 30;
	        mesact = mesact - 1;
	        dias =  diact - dianac;
	    }
	    else
	        dias =  diact - dianac;

	    if( mesact < mesnac )
	    {
	        mesact = mesact + 12;
	        anioact = anioact - 1 ;
	        meses = mesact - mesnac;
	    }
	    else
	        meses = mesact - mesnac;

	    cout << "Tienes"<<endl;
	    cout << " Edad: " <<anioact - anionac << endl;
	    cout << " Mes: " << meses << endl;
	    cout << " Dia: " << dias << endl;
	return 0;
}
