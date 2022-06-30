#include "product.h"
#include <iostream>
#include <string>

void printProd(products& P) {
	std::cout << "Название товара: " << P.name << std::endl;
	std::cout << "Колличество товара: " << P.remains << " шт." << std::endl;
	std::cout << "Цена за единицу: " << P.price << " руб." << std::endl << std::endl;
}

int fullPrice(products& P) {
	return P.remains * P.price;
}

void sell(products& P, int& N) {
	while (N > P.remains) {
		std::cout << "ОШИБКА! Нет такого колличества товара!\n\nВведите корректное колличество -> ";
		std::cin >> N;
	}
	P.remains -= N;
	std::cout << "Остаток товара = " << P.remains << " шт.\n\n";
	system("pause");
	system("cls");
}