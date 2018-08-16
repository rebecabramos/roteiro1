#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <string>

class Empregado{

	protected:
		std::string nome;
		std::string sobrenome;
		double salario;

	public:
		Empregado(std::string nome, std::string sobrenome, double salario);
		Empregado();

		std::string getNome();
		std::string getSobrenome();
		float getSalario();

		void setNome(std::string nome);
		void setSobrenome(std::string sobrenome);
		void setSalario(double salario);

};
#endif
