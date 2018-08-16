#include "Pessoa.h"

Pessoa::Pessoa(){

	nome = " ";
	idade = 0;
	num = 0;
}

std::string Pessoa::getNome(){

	return nome;

}

int Pessoa::getIdade(){

	return idade;

}

int Pessoa::getNumero(){

	return num;

}

void Pessoa::setNome(std::string nNome){

	nome = nNome;

}

void Pessoa::setIdade(int nIdade){

	idade = nIdade;

}

void Pessoa::setNumero(int nNumero){

	num = nNumero;

}
