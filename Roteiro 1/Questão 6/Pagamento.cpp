#include "Pagamento.h"

double Pagamento::getvPagamento(){

	return vPagamento;
}

void Pagamento::setvPagamento(double valor){

	vPagamento = valor;
}

std::string Pagamento::getNomeFuncionario(){

	return nomeFuncionario;
}

void Pagamento::setNomeFuncionario(std::string nome){

	nomeFuncionario = nome;
}
