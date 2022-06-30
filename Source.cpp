#include <iostream>
#include "product.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int n;

	cout << "\tЗадача.\n";

	products thing1 = { "Эспандер для рта.", 500, 1313 };
	products thing2 = { "Немного поношеный костюм агента 007 (1982 г.).", 346, 9000 };
	products thing3 = { "Книга: \"Как собрать 1000 тараканов в одной крыше\".", 1500, 33 };
	do {
		if (thing1.remains == 0 && thing2.remains == 0 && thing3.remains == 0) {
			cout << "\n\n\nЧёрная суббота прошла на славу. Скоро воскресенье. За ним понедельник. А дальше... календарь в помощь.\n\n";
			system("pause");
			system("cls");
			cout << "\n\n\nНо, если Вам нужен товар, то его точно нет.\n\n";
			system("pause");
			system("cls");
			cout << "\n\n\nСовсем, совсем нет.\n\n";
			break;
		}
		else
			cout << "Товар в наличии:\n1. ";
		if (thing1.remains == 0)
			cout << "Большое спасибо за проявленный интерес, но на данный момент товара нет в наличии!\nМы уже сообщили нашим высокоскоростным лягушкам, что спрос на него вырос и в ближайшее время\nон будет доставлен на склад.\nПожалуйста, наберитесь терпения!\n\n";
		else
			printProd(thing1);
		cout << "2. ";
		if (thing2.remains == 0)
			cout << "Большое спасибо за проявленный интерес, но на данный момент товара нет в наличии!\nМы уже сообщили нашим высокоскоростным лягушкам, что спрос на него вырос и в ближайшее время\nон будет доставлен на склад.\nПожалуйста, наберитесь терпения!\n\n";
		else
			printProd(thing2);
		cout << "3. ";
		if (thing3.remains == 0)
			cout << "Большое спасибо за проявленный интерес, но на данный момент товара нет в наличии!\nМы уже сообщили нашим высокоскоростным лягушкам, что спрос на него вырос и в ближайшее время\nон будет доставлен на склад.\nПожалуйста, наберитесь терпения!\n\n";
		else
			printProd(thing3);

		cout << "4. Выйти из программы.\n\n";

		cout << "Ввод -> ";
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
			cout << "Суммарная стоимость остатков товара = " << fullPrice(thing1) << " руб.\n";
			cout << "\nУкажите колличество приобретаемого товара -> ";
			cin >> n;
			sell(thing1, n);
			break;
		case 2:
			if (thing2.remains == 0)
				continue;
			else
				printProd(thing2);
			cout << "Суммарная стоимость остатков товара = " << fullPrice(thing2) << " руб.\n";
			cout << "\nУкажите колличество приобретаемого товара -> ";
			cin >> n;
			sell(thing2, n);
			break;
		case 3:
			if (thing3.remains == 0)
				continue;
			else
				printProd(thing3);
			cout << "Суммарная стоимость остатков товара = " << fullPrice(thing3) << " руб.\n";
			cout << "\nУкажите колличество приобретаемого товара -> ";
			cin >> n;
			sell(thing3, n);
			break;
		case 4: cout << "Спасибо! Возвращайтесь снова!\n\n"; break;
		default: cout << "Ошибка! Такого товара нет! Введите корректное значение!\n\n"; system("pause"); system("cls"); break;
		}
	} while (n != 4);


	return 0;
}