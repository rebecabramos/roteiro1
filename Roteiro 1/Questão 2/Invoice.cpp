#include "Invoice.h"

Invoice::Invoice(){

	num = 0;
	descricao = " ";
	quantidade = 0;
	preco = 0.0;

}

int Invoice::getNumero(){

	return num;
}

std::string Invoice::getDescricao(){

	return descricao;
}

int Invoice::getQuant(){

	return quantidade;
}

float Invoice::getPreco(){

	return preco;
}

void Invoice::setNumero(int num){

	num = num;
}

void Invoice::setDescricao(std::string desc){

	descricao = desc;
}

void Invoice::setQuant(int q){

	quantidade = q;
}

void Invoice::setPreco(float npreco){

	preco = npreco;
}

float Invoice::getInvoiceAmount(){

	float resultado;

	if(quantidade < 0){

		quantidade = 0;
	}

	if(preco < 0){

		preco = 0.0;
	}

	resultado = quantidade * preco;

	return resultado;
}
