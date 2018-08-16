#ifndef CONTROLEDEGASTOS_H
#define CONTROLEDEGASTOS_H

#include "Despesa.h"

class ControleDeGastos{

	protected:
		Despesa despesas[100];

	public:
		void addDespesa(double getValor, int tGasto);
		double totalDeDespesas();
		bool existeDespesaDoTipo(int gettGasto);
};

#endif
