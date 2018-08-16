#include "Empregado.h"

Empregado::Empregado(){

	nome = " ";
	sobrenome = " ";
	salario = 0.0;

}

Empregado::Empregado(std::string strNome, std::string strSobrenome, double nSalario){

	nome = strNome;
	sobrenome = strSobrenome;
	salario = nSalario;

}

std::string Empregado::getNome(){

	return nome;

}

std::string Empregado::getSobrenome(){

	return sobrenome;

}

double Empregado::getSalario(){

	return salario;

}

void Empregado::setNome(std::string strNome){

	nome = strNome;

}

void Empregado::setSobrenome(std::string strSobrenome){

	sobrenome = strSobrenome;

}

void Empregado::setSalario(double nSalario){

	if(salario < 0){

		salario = 0.0;

	}else{

		salario = nSalario;

	}
}
