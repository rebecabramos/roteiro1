#include "Pagamento.h"
#include "ControleDePagamentos.h"

#include <iostream>

using namespace std;

int main(void){

	int i = 0;

	ControleDePagamentos pag[100];

	pag[i].addPagamento(600.5, "Primeiro");
	pag[i].addPagamento(260.4, "Segundo");

	cout << pag[i].totalPagamentos() << endl;

	return 0;
}
