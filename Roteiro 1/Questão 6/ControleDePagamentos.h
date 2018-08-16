#ifndef CONTROLEDEPAGAMENTOS_H
#define CONTROLEDEPAGAMENTOS_H

#include "Pagamento.h"

class ControleDePagamentos{

	protected:

		Pagamento pagamentos[100];

	public:

		double totalPagamentos();
		void addPagamento(double getvPagamento, std::string getNomeFuncionario);
		bool existePagFuncionario(std::string getNomeFuncionario);
};

#endif
