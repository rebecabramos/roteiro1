#include <iostream>
#include "Data.h"

using namespace std;

int main(void) {
	
	Data datateste = Data(31, 5, 1998);
	
	datateste.avancarDia();
	
	cout << datateste.dia << "/" << datateste.mes << "/" << datateste.ano << endl;
	
	return 0;
}
