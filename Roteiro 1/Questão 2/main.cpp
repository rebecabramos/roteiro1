#include "Invoice.h"

#include <iostream>

using namespace std;

int main(void){

	Invoice teste = Invoice();

	teste.setPreco(15);
	teste.setQuant(5);

	cout << teste.getInvoiceAmount() << endl;

	return 0;
}
