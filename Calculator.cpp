/*
Der Befehl "include" teilt dem Debugger mit dass etwas inkludiert werden soll
Bei "iostream" handelt es sich um eine Standardfunktionsbibliothek
*/
#include <iostream>


//Es wird ein Namensraum deklariert um uns die Arbeit zu erleichtern es ist jedoch nicht zwingend erforderlich
using namespace std;



//"int main()" ist unser Funktionskopf, während sich der Funktionsrumpf in geschweiften Klammern befindet
int main()
{
	float value1;
	float value2;
	float summ;

	cout << "Bitte 1.Wert eingeben: ";
	cin >> value1;
	cout << "Bitte 2.Wert eingeben: ";
	cin >> value2;

	summ = value1 + value2;
	cout << "Ergebnis ist: " << summ << endl;
		
			
	summ = value1 / value2;
	cout << "Ergebnis ist: " << summ << endl;
	summ = value1 - value2;
	cout << "Ergebnis ist: " << summ << endl;
	summ = value1 * value2;
	cout << "Ergebnis ist: " << summ << endl;



	return 0;
}

int secondfoo()
{


	return 0;
}