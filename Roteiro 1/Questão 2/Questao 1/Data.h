#ifndef DATA_H
#define DATA_H
#include <iostream>

class Data{
	
	public:
		
	int dia;
	int mes;
	int ano;
	
	Data();
	Data(int dia, int mes, int ano);
	void avancarDia();
};

#endif
