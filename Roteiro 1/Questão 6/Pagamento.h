#ifndef PAGAMENTO_H
#define PAGAMENTO_H
#include <iostream>
#include <string>

class Pagamento{

	protected:
		double vPagamento;
		std::string nomeFuncionario;

	public:
		double getvPagamento();
		void setvPagamento(double vPagamento);

		std::string getNomeFuncionario();
		void setNomeFuncionario(std::string nomeFuncionario);
};

#endif
