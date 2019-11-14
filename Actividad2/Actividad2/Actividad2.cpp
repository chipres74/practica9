// Actividad2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>

using namespace std;
void pausa();
int main()
{
	bool bandera = false;
	do
	{
		system("cls");
		cin.clear();
		char numero;
		cout << "Lista de estudiantes";
		cout << "\t1.- Pedro Estrada" << endl;
		cout << "\t2.- Karla Garcia" << endl;
		cout << "\t3.- Perla Sanchez" << endl;
		cout << "\t4.- Antonio Perez" << endl;
		cout << "\t5.- Ana Valdez" << endl;
		cout << "Teclea el numero de lista del estudiante para conocer su grupo y correo: ";
		cin >> numero;
		switch (numero)
		{
		case '1':
			cout << "Nombre del estudiante: Pedro Estrada" << endl;
			cout << "Grado y grupo: 3A" << endl;
			cout << "Correo: pedroe@ucol.mx" << endl;
			pausa();
			return 0;
			break;
		case '2':
			cout << "Nombre del estudiante: Karla Garcia" << endl;
			cout << "Grado y grupo: 3C" << endl;
			cout << "Correo: garciakarla@ucol.mx" << endl;
			pausa();
			return 0;
			break;
		case '3':
			cout << "Nombre del estudiante: Perla Sanchez" << endl;
			cout << "Grado y grupo: 3D" << endl;
			cout << "Correo: sanchezp@ucol.mx" << endl;
			pausa();
			return 0;
			break;
		case '4':
			cout << "Nombre del estudiante: Antonio Perez" << endl;
			cout << "Grado y grupo: 3B" << endl;
			cout << "Correo: perezantonio@ucol.mx" << endl;
			pausa();
			return 0;
			break;
		case '5':
			cout << "Nombre del estudiante: Ana valdez" << endl;
			cout << "Grado y grupo: 3A" << endl;
			cout << "Correo: valdezaa@ucol.mx" << endl;
			pausa();
			return 0;
			break;
		default:
			cout << "Este numero de lista no se encuentra" << endl;
		}
	}
	while (bandera != true);
}

//Desarrollamos la función
void pausa()
{
	cout << "Pulsa una tecla para continuar... ";
	getwchar();
	getwchar();
}