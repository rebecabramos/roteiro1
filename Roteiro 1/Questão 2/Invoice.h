#ifndef INVOICE_H
#define INVOICE_H

#include <string>

class Invoice{

	protected:
		int num;
		std::string descricao;
		int quantidade;
		float preco;

	public:
		Invoice();

		int getNumero();
		std::string getDescricao();
		int getQuant();
		float getPreco();
		float getInvoiceAmount();

		void setNumero(int num);

		void setDescricao(std::string descricao);

		void setQuant(int quantidade);

		void setPreco(float preco);

};

#endif
