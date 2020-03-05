#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() 
{
	string ae, as, line, x, y, oper, n1, n2;
	int i = 0, esp, num1, num2, result;
	char arrcod[15];

	cout << "Ingrese el nombre del archivo de texto de entrada : " << endl;
	cin >> ae;

	cout << "Ingrese el nombre del archivo de texto de salida : " << endl;
	cin >> as;

	ifstream archivo2;
	archivo2.open(ae);

	ofstream archivosal;
	archivosal.open(as);
	
	getline(archivo2, y);
	cout << endl;

	while (i< y.length())
	{
		arrcod[i] = y[i];
		cout << arrcod[i];
		i++;
		y.erase(i, 1);
	}

	cout << endl;
	i = 0;
	 
	while (getline(archivo2,x))
	{
		while (i < x.length())
		{
			if (x[i] == arrcod[0]){ x[i] = '0';}
			else if (x[i] == arrcod[1]) { x[i] = '1';}
			else if (x[i] == arrcod[2]) { x[i] = '2'; }
			else if (x[i] == arrcod[3]) { x[i] = '3'; }
			else if (x[i] == arrcod[4]) { x[i] = '4'; }
			else if (x[i] == arrcod[5]) { x[i] = '5'; }
			else if (x[i] == arrcod[6]) { x[i] = '6'; }
			else if (x[i] == arrcod[7]) { x[i] = '7'; }
			else if (x[i] == arrcod[8]) { x[i] = '8'; }
			else if (x[i] == arrcod[9]) { x[i] = '9'; }
			else if (x[i] == arrcod[10]) { x[i] = '+'; }
			else if (x[i] == arrcod[11]) { x[i] = '-'; }
			else if (x[i] == arrcod[12]) { x[i] = '*'; }
			else if (x[i] == arrcod[13]) { x[i] = '/'; }
			else { x[i] = ' '; }

			cout << x[i];
			archivosal << x[i];
						
			i++;
		}

		

		esp = x.find(' ');
		n1 = x.substr(0, esp);
		n2 = x.substr(esp+2, x.length());

		num1 = stoi(n1);
		num2 = stoi(n2);

		if (x.find('+') != -1) { result = num1 + num2; }
		else if (x.find('-') != -1) { result = num1 - num2; }
		else if (x.find('*') != -1) { result = num1 * num2; }
		else if (x.find('/') != -1) { result = num1 / num2; }
		
		cout << " = " << result << endl;
		archivosal << " = " << result << endl;

		
		i = 0;

	}

	archivosal.close();

	archivo2.close();

	   	 	

}