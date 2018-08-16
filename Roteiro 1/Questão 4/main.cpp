#include "Pessoa.h"

#include <iostream>

using namespace std;

int main(void){

	Pessoa um = Pessoa();
	Pessoa dois = Pessoa();

	um.setNome("Primeiro");
	um.setIdade(01);
	um.setNumero(11111111);

	dois.setNome("Segundo");
	dois.setIdade(02);
	dois.setNumero(22222222);

	return 0;
}

