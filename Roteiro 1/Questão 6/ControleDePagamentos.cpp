#include "ControleDePagamentos.h"

void ControleDePagamentos::addPagamento(double valor, std::string nome){

	static int j = 0;

	pagamentos[j].setvPagamento(valor);
	pagamentos[j].setNomeFuncionario(nome);

	j++;
}

double ControleDePagamentos::totalPagamentos(){

	int i;
	double result = 0;

	for(i = 0; i < 100; i++){

		result += pagamentos[i].getvPagamento();
	}

	return result;

}

bool ControleDePagamentos::existePagFuncionario(std::string nome){

	int i;

	for(i = 0; i < 100; i++){

		if(pagamentos[i].getNomeFuncionario().compare(nome) == 0){

			return true;
		}
	}

	return false;
}

