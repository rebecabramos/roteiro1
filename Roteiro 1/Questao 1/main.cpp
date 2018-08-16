#include "Data.h"

#include <iostream>

using namespace std;

int main(void){

	Data teste = Data(31, 7, 2018);

	teste.avancarDia();

	cout << teste.dia << "/" << teste.mes << "/" << teste.ano << endl;

	return 0;
}
