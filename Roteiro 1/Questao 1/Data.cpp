#include "Data.h"

Data::Data(){

	dia = 0;
	mes = 0;
	ano = 0;
}

Data::Data(int d, int m, int a){

	if(d >= 1 && d <= 31){

		dia = d;

	}else{

		std::cout << "Este Dia Nao Existe" << std::endl;
	}

	if(m >= 1 && m <= 12){

		mes = m;

	}else{

		std::cout << "Este Mes Nao Existe" << std::endl;
	}

	if(a >= 1900){

		ano = a;

	}else{

		std::cout << "Este Ano Nao Existe" << std::endl;
	}
}

void Data::avancarDia(){

	if(dia != 32){

		dia++;
	}
	if(mes == 12 && dia == 32){

		dia = 1;
		mes = 1;
		ano++;
	}
	if(dia == 32){

		dia = 1;

		if(mes != 12){

			mes++;
		}
	}
}
