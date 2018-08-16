#ifndef DESPESA_H
#define DESPESA_H

#include <iostream>

class Despesa{

	protected:
		double valor;
		int tGasto;

	public:
		double getValor();
		void setValor(double valor);

		int gettGasto();
		void settGasto(int tGasto);
};
#endif
