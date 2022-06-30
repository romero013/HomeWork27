#include "product.h"
#include <iostream>
#include <string>

void printProd(products& P) {
	std::cout << "�������� ������: " << P.name << std::endl;
	std::cout << "����������� ������: " << P.remains << " ��." << std::endl;
	std::cout << "���� �� �������: " << P.price << " ���." << std::endl << std::endl;
}

int fullPrice(products& P) {
	return P.remains * P.price;
}

void sell(products& P, int& N) {
	while (N > P.remains) {
		std::cout << "������! ��� ������ ����������� ������!\n\n������� ���������� ����������� -> ";
		std::cin >> N;
	}
	P.remains -= N;
	std::cout << "������� ������ = " << P.remains << " ��.\n\n";
	system("pause");
	system("cls");
}