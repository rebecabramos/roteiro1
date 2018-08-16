#include "Empregado.h"

#include <iostream>

using namespace std;

int main(void){

	double aumento = 0, nSalario = 0;

	Empregado um = Empregado("Um", "Primeiro", 500);
	Empregado dois = Empregado("Dois", "Segundo", 600);

	cout << "Salario de "<< um.getNome() << ": " << um.getSalario() * 12 << endl;
	cout << "Salario de "<< dois.getNome() << ": " << dois.getSalario() * 12 << endl;

	aumento = um.getSalario() * 0.1;
	nSalario = um.getSalario() + aumento;
	um.setSalario(nSalario);

	cout << "\nNovo salario de "<< um.getNome() << ": " << um.getSalario() * 12 << endl;

	aumento = dois.getSalario() * 0.1;
	nSalario = dois.getSalario() + aumento;
	dois.setSalario(nSalario);

	cout << "Novo salario de "<< dois.getNome() << ": " << dois.getSalario() * 12 << endl;

	return 0;
}
