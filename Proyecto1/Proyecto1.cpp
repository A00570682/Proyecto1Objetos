#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() 
{
	string ae, as, line, x, y, oper, op, z;
	int i = 0, j = 0, n, numero;
	int num[100];

	cout << "Ingrese el nombre del archivo de texto de entrada (incluyendo extension .txt ) : " << endl;
	cin >> ae;

	cout << "Ingrese el nombre del archivo de texto de salida (incluyendo extension .txt ) : " << endl;
	cin >> as;

	ofstream archivoe;
	archivoe.open(ae);
	archivoe << "B y / 8 T & Q E P F C c # @" << endl;
	archivoe << "y/8B @ yB" << endl;
	archivoe << "yBBB # /" << endl;
	archivoe << "TFPyy C &QQy" << endl;
	archivoe << "8EPPF8/ c /" << endl;

	archivoe.close();

	ifstream archivo2;
	archivo2.open(ae);

	ofstream archivosal;
	archivosal.open(as);
	
	while (getline(archivo2,x))
	{		
		while (i <= x.length())
		{			
			switch (x[i])
			{
			case'B':
				line = '0';
				break;

			case 'y':
				line = '1';
				break;

			case '/':
				line = '2';
				break;

			case '8':
				line = '3';
				break;

			case 'T':
				line = '4';
				break;

			case '&':
				line = '5';
				break;

			case 'Q':
				line = '6';
				break;

			case 'E':
				line = '7';
				break;

			case 'P':
				line = '8';
				break;

			case 'F':
				line = '9';
				break;

			case 'C':
				oper = '+';
				break;

			case 'c':
				oper = '-';
				break;

			case '#':
				oper = '*';
				break;

			case '@':
				oper = '/';
				break;
			
			case ' ':
				x.erase(i, 1);
				i--;
				break;
			}

			numero = stoi(line);

			if (i<20)
			{
				archivosal << numero;
				std::cout << numero;
			}
			else
			{
				archivosal << oper;
				std::cout << oper;
			}
				
			
			i++;
			i++;
		}
		
		archivosal << endl;
		cout << endl;
				
	}

	while (archivo2 >> y >> op >> z)
	{
		switch (y[i])
		{
		case'B':
			line = '0';
			break;

		case 'y':
			line = '1';
			break;

		case '/':
			line = '2';
			break;

		case '8':
			line = '3';
			break;

		case 'T':
			line = '4';
			break;

		case '&':
			line = '5';
			break;

		case 'Q':
			line = '6';
			break;

		case 'E':
			line = '7';
			break;

		case 'P':
			line = '8';
			break;

		case 'F':
			line = '9';
			break;

		case 'C':
			oper = '+';
			break;

		case 'c':
			oper = '-';
			break;

		case '#':
			oper = '*';
			break;

		case '@':
			oper = '/';
			break;

		case ' ':
			y.erase(i, 1);
			i--;
			break;
		}
		switch (z[i])
		{
		case'B':
			line = '0';
			break;

		case 'y':
			line = '1';
			break;

		case '/':
			line = '2';
			break;

		case '8':
			line = '3';
			break;

		case 'T':
			line = '4';
			break;

		case '&':
			line = '5';
			break;

		case 'Q':
			line = '6';
			break;

		case 'E':
			line = '7';
			break;

		case 'P':
			line = '8';
			break;

		case 'F':
			line = '9';
			break;

		case 'C':
			oper = '+';
			break;

		case 'c':
			oper = '-';
			break;

		case '#':
			oper = '*';
			break;

		case '@':
			oper = '/';
			break;

		case ' ':
			z.erase(i, 1);
			i--;
			break;
		}

		cout << y << op << z << endl;

		
	}

	
	archivosal.close();

	archivo2.close();


	




	
	
	

}