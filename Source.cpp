#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	//Primer ejericio: sumar 2 numeros
	cout << "ingrese 2 numeros para sumar" << endl;
	cout << "Ingrese el primer numero: ";
	cin >> a;
	cout << "Ingrese el segundo numero: ";
	cin >> b;
	cout << "La suma del primer y segundo numero es: " << (a + b) << endl;
	cout << endl;

	//Segundo ejericio: restar 2 numeros y mostrar si es negativo o positivo
	cout << "Ingrese 2 numeros para restar" << endl;
	cout << "Ingrese el primer numero: ";
	cin >> a;
	cout << "Ingrese el segundo numero: ";
	cin >> b;
	cout << "La resta del primer y segundo numero es: " << (a - b) << endl;
	if (a-b < 0)
	{
		cout << "El numero es negativo" << endl;
	}
	else
	{
		cout << "El numero es positivo" << endl;
	}
	cout << endl;

	//Tercer ejrcicio: Multiplicar 2 numeros y mostrar si el resultad es mayor o menor a 100
	cout << "Ingrese 2 numeros para multiplicar" << endl;
	cout << "Ingrese el primer numero: ";
	cin >> a;
	cout << "Ingrese el segundo numero: ";
	cin >> b;
	cout << "La multiplicacion del primer y segundo numero es: " << (a * b) << endl;
	if (a*b < 100)
	{
		cout << "El numero es menor a 100" << endl;
	}
	else
	{
		cout << "El numero es mayor a 100" << endl;
	}
}