#ifndef PESSOA_H
#define PESSOA_H

#include <string>

class Pessoa{

	protected:
		std::string nome;
		int idade;
		int num;

	public:

		Pessoa();

		std::string getNome();
		int getIdade();
		int getNumero();

		void setNome(std::string nome);
		void setIdade(int idade);
		void setNumero(int num);

};

#endif
