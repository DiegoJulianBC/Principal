#include <iostream>

using namespace std;

int main()
{
	// Variables
	char a;
	int ai = 0;
	float af = 0;
	float bf = 0;
	float cf = 0;
	// Perdio o gano cursos
	cout << "Por favor ingrese 3 notas: " << endl;
	cin >> af;
	cin >> bf;
	cin >> cf;
	if (af >= 60)
	{
		if (bf >= 60)
		{
			if (cf >= 60)
			{
				cout << "Gano todos los cursos" << endl;
			}
			else
			{
				cout << "Perdio cursos" << endl;
			}
		}
		else
		{
			cout << "Perdio cursos" << endl;
		}
	}
	else
	{
		cout << "Perdio cursos" << endl;
	}
	cout << endl;

	// Solicitar un número, par = letra o impar = otro número

	cout << "Por favor ingrese un numero: " << endl;
	cin >> ai;
	if ((ai % 2) == 0)
	{
		cout << "Ingresar una letra: " << endl;
		cin >> a;
		cout << "Su letra es: " << a << endl;
	}
	else
	{
		cout << "Por favor ingresar otro numero: " << endl;
		cin >> ai;
		cout << "Su numero es: " << ai << endl;
	}
	cout << endl;

	// Solicitar un número y mostras si es positivo, negativo o 0

	cout << "Ingrese cualquier numero de la recta numerica: " << endl;
	cin >> af;
	if (af > 0)
	{
		cout << "Su numero es mayor a 0" << endl;
	}
	if (af < 0)
	{
		cout << "Su numero es menor a 0" << endl;
	}
	if (af == 0)
	{
		cout << "Su numero es 0" << endl;
	}

	// Restar 2 numeros y sumarle 40

	cout << "Ingrese 2 numeros de la recta numerica: " << endl;
	cin >> af;
	cin >> bf;
	if (af - bf + 40 > 0)
	{
		cout << "Su numero es positivo y es: " << af - bf + 40 << endl;
	}
	if (af - bf + 40 < 0)
	{
		cout << "Su numero es negativo y es: " << af - bf + 40 << endl;
	}
	if (af - bf + 40 == 0)
	{
		cout << "Su numero no es ni positivo ni negativo si no es: " << af - bf + 40 << endl;
	}
}