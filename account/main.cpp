#include <iostream>
using namespace std;
#include "account.h"

void main() {

	insan insan1("Furkan Coskun", 25);
	insan1.printInsan();

	hesap hesap1(8000, "Selim Bayram", 25);
	hesap1.printHesap();
	cout << "\n";
	hesap1.cekHesap(2000);
	hesap1.printHesap();
	cout << "\n";
	hesap1.cekHesap(7000);
	hesap1.printHesap();
	cout << "\n";
	hesap1.yatirHesap(2500);
	hesap1.printHesap();


}