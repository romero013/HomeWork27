#include <iostream>
#include "product.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int n;

	cout << "\t������.\n";

	products thing1 = { "�������� ��� ���.", 500, 1313 };
	products thing2 = { "������� ��������� ������ ������ 007 (1982 �.).", 346, 9000 };
	products thing3 = { "�����: \"��� ������� 1000 ��������� � ����� �����\".", 1500, 33 };
	do {
		if (thing1.remains == 0 && thing2.remains == 0 && thing3.remains == 0) {
			cout << "\n\n\n׸���� ������� ������ �� �����. ����� �����������. �� ��� �����������. � ������... ��������� � ������.\n\n";
			system("pause");
			system("cls");
			cout << "\n\n\n��, ���� ��� ����� �����, �� ��� ����� ���.\n\n";
			system("pause");
			system("cls");
			cout << "\n\n\n������, ������ ���.\n\n";
			break;
		}
		else
			cout << "����� � �������:\n1. ";
		if (thing1.remains == 0)
			cout << "������� ������� �� ����������� �������, �� �� ������ ������ ������ ��� � �������!\n�� ��� �������� ����� ���������������� ��������, ��� ����� �� ���� ����� � � ��������� �����\n�� ����� ��������� �� �����.\n����������, ���������� ��������!\n\n";
		else
			printProd(thing1);
		cout << "2. ";
		if (thing2.remains == 0)
			cout << "������� ������� �� ����������� �������, �� �� ������ ������ ������ ��� � �������!\n�� ��� �������� ����� ���������������� ��������, ��� ����� �� ���� ����� � � ��������� �����\n�� ����� ��������� �� �����.\n����������, ���������� ��������!\n\n";
		else
			printProd(thing2);
		cout << "3. ";
		if (thing3.remains == 0)
			cout << "������� ������� �� ����������� �������, �� �� ������ ������ ������ ��� � �������!\n�� ��� �������� ����� ���������������� ��������, ��� ����� �� ���� ����� � � ��������� �����\n�� ����� ��������� �� �����.\n����������, ���������� ��������!\n\n";
		else
			printProd(thing3);

		cout << "4. ����� �� ���������.\n\n";

		cout << "���� -> ";
		cin >> n;
		cout << "\n";
		//system("pause");
		system("cls");
		switch (n) {
		case 1:
			if (thing1.remains == 0)
				continue;
			else
				printProd(thing1);
			cout << "��������� ��������� �������� ������ = " << fullPrice(thing1) << " ���.\n";
			cout << "\n������� ����������� �������������� ������ -> ";
			cin >> n;
			sell(thing1, n);
			break;
		case 2:
			if (thing2.remains == 0)
				continue;
			else
				printProd(thing2);
			cout << "��������� ��������� �������� ������ = " << fullPrice(thing2) << " ���.\n";
			cout << "\n������� ����������� �������������� ������ -> ";
			cin >> n;
			sell(thing2, n);
			break;
		case 3:
			if (thing3.remains == 0)
				continue;
			else
				printProd(thing3);
			cout << "��������� ��������� �������� ������ = " << fullPrice(thing3) << " ���.\n";
			cout << "\n������� ����������� �������������� ������ -> ";
			cin >> n;
			sell(thing3, n);
			break;
		case 4: cout << "�������! ������������� �����!\n\n"; break;
		default: cout << "������! ������ ������ ���! ������� ���������� ��������!\n\n"; system("pause"); system("cls"); break;
		}
	} while (n != 4);


	return 0;
}