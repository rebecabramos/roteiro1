#include "Despesa.h"
#include "ControleDeGastos.h"

#include <iostream>

using namespace std;

int main(void){

	int i = 0;

	ControleDeGastos gasto[100];

	gasto[i].addDespesa(700.9, 1);
	gasto[i].addDespesa(800.9, 1);

	cout << gasto[i].totalDeDespesas() << endl;

	return 0;
}
