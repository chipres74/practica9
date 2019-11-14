// actividad1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>	

using namespace std;

int main()
{
    char letra;
	cout << "Teclea una letra: ";
	cin >> letra;
	switch (letra)
	{
	case 'a':
		cout << "Es una vocal";
		break;
	case 'e':
		cout << "Es una vocal";
		break;
	case 'i':
		cout << "Es una vocal";
		break;
	case 'o':
		cout << "Es una vocal";
		break;
	case 'u':
		cout << "Es una vocal";
		break;
	default:
		cout << "Es consonante";

	}
}

