#include <iostream>
#include <stdlib.h>
using namespace std;
void valNuevo(int&,int&);
void pedirDatos();
void funpot(int x, int y);
void Recursividad(int);
int main(int argc, char** argv) {

	    int num1, num2,opcion,numero,exponente;
	    while(opcion!=3){

	    cout << "MENU" << endl;
        cout << "\t1 ...::::Paso por referencia::::..." << endl;
        cout << "\t2 ...::::Paso por valor:::..." << endl;
        cout << "\t3 .- ...:::Recursividad:::..." << endl;
        cout << "\t4 .- Salir" << endl;
        cout << "Selecciona una opcion: ";
        cin >> opcion;

        	switch(opcion)
		{
			case 1:
				  cout << "Inserte dos numeros: "<<endl;
				  cin>>num1>>num2;
				  valNuevo(num1,num2);
				  cout<<" Primer numero: valor nuevo: "<<num1<<endl;
				  cout<<" Segundo numero: valor nuevo: "<<num2<<endl;

				break;

			case 2:
				pedirDatos();
				funpot(numero, exponente);

				break;
			case 3:
				cout<<"RECURSIVIDAD"<<endl;
				Recursividad(20);
				break;

			case 4:
				system("cls");
				cout << "saliste del progrma.\n";
				system(" pause");
				break;

}
}

	 return 0;

}
void valNuevo(int& xnum, int& ynum)
{
	cout<<"Primer numero: valor nuevo: "<<xnum<<endl;
	cout<<"Segundo numero: valor nuevo: "<<ynum<<endl;

	xnum=89;
	ynum=100;

   }
void pedirDatos(){
	int numero,exponente;
	cout<<"Digite un numero: ";
	cin>>numero;
	cout<<"inserte numero de exponentes: ";
	cin>>exponente;

}
void funpot(int x, int y){
	long resultado=1;
	for (int i=1; i<=y; i++){
		resultado *=x;
	}
	cout<<"Resultado ontenido: "<<resultado<<endl;
}
   void Recursividad(int contador=20){
	if(contador==1)return;
	cout<<contador<<" ";
	Recursividad(contador-1);


}
