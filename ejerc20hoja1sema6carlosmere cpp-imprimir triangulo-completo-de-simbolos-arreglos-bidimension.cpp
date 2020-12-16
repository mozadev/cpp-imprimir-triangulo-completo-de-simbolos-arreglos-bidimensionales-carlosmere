#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int n;
	int espacios;
	int caracter;
	cout << "Ingrese N: ";
	cin >> n;

	espacios = n - 1;

	for (int i = 1; i <= n; i++)//FILAS
	{
		caracter = 1;
		for (int j = 1; j <= espacios; j++)
		{
			cout << " ";
		}
		for (int k = 1; k <= 2 * i - 1; k++)
		{
			cout << caracter;
			if (k >= i)
				caracter--;
			else
				caracter++;
		}
		cout << endl;
		espacios--;
	}
	_getch();
	return 0;
}