#include <iostream>;
#include <conio.h>;
#include <ctime>;
using namespace std;
class Cats
{
public:
	char name[10];
	int color;
	enum colors
	{
		white, grey, red, brown, black
	};
	int vrednost;
	enum vrednostt
	{
		small, medium, high, devil
	};
	void setName(char* _name) //Функция присвоения котенку имени
	{
		for (int i(0); i<10; i++)
			name[i] = _name[i];
	}
	char* getName() //Функция получения имени котенка
	{
		return name;
	}
	void setColorVred(int _color, int _vred) //Функция присвоения котенку цвета и вредности
	{
		color = _color;
		vrednost = _vred;
	}
	int getColor()
	{
		return color;
	}
	int getVrednost()
	{
		return vrednost;
	}
};
void sortingcats(Cats* _mas) 
{
	int Choice(0);
	Cats mas[10] = { 0, 0, 0 };
	for (int i(0); i < 10; i++) 
	{
		mas[i] = _mas[i];
	}
	do
	{
		system("cls");
		cout << "Выберите признак сортировки: 1 - Сортировка кошачьих по имени (в алфавитном порядке)" << endl << "2 - Сортировка кошачьих по цвету (от светлых до темных)" << endl << "3 - Сортировка кошачьих по вредности (от лапочки до дьявола) " << endl << "4 - Выход в предыдущее меню " << endl << "Ваш выбор: ";
		cin >> Choice;
		cout << endl;
		switch (Choice)
		{
		case 1: //Сортировка по алфавиту. 
		{
			for (int i(0); i < 10; i++)
			{
				for (int j(0); j < 9; j++)
				{
					if (strcmp(&mas[j].name[0], &mas[j + 1].name[0]) > 0) 
					{
						Cats tmp = mas[j];
						mas[j] = mas[j + 1];
						mas[j + 1] = tmp;
					}
				}
			}
			cout << "Результат сортировки: " << endl; 
			for (int i(0); i < 10; i++)
				cout << mas[i].name << endl;
			cout << "Нажмите любую клавишу для возврата в меню";
			_getch();
			Choice = 0;
			break;
		}
		case 2: //Сортировка по  цвету
		{
			for (int i(0); i < 10; i++)
			{
				for (int j(0); j < 9; j++)
				{
					if (mas[j].color > mas[j + 1].color)
					{
						Cats tmp = mas[j];
						mas[j] = mas[j + 1];
						mas[j + 1] = tmp;
					}
				}
			}
			cout <<  "Результат сортировки : " << endl;
			for (int i(0); i < 10; i++)
			{
				cout << " Имя котенка: " << mas[i].name << " Цвет котенка: ";
				switch (mas[i].color)
				{
				case 0:
				{
					cout << "Белый" << endl;
					break;
				}
				case 1:
				{
					cout << "Серый" << endl;
					break;
				}
				case 2:
				{
					cout << "Рыжий" << endl;
					break;
				}
				case 3:
				{
					cout << "Коричневый" << endl;
					break;
				}
				case 4:
				{
					cout << "Черный" << endl;
					break;
				}
				}
			}
			cout << "Нажмите любую клавишу для возврата в меню";
			_getch();
			Choice = 0;
			break;
		}
		case 3: //Сортировка по вредности
		{
			for (int i(0); i < 10; i++)
			{
				for (int j(0); j < 9; j++)
				{
					if (mas[j].vrednost > mas[j + 1].vrednost)
					{
						Cats tmp = mas[j];
						mas[j] = mas[j + 1];
						mas[j + 1] = tmp;
					}
				}
			}
			cout << "Результат сортировки : " << endl;
			for (int i(0); i < 10; i++)
			{
				cout << " Имя котенка: " << mas[i].name << " Вредность котенка: ";
				switch (mas[i].vrednost)
				{
				case 0:
				{
					cout << "Ми-ми-ми, можно тискать" << endl;
					break;
				}
				case 1:
				{
					cout << "обычный кот" << endl;
					break;
				}
				case 2:
				{
					cout << "лучше не трогать" << endl;
					break;
				}
				case 3:
				{
					cout << "бегите!" << endl;
					break;
				}
				}
			}
			cout << "Нажмите любую клавишу для возврата в меню";
			_getch();
			Choice = 0;
			break;
		}
		case 4:
		{
			Choice = 0;
			break;
		}
		default:
		{
			cout << "Неверный ввод. Введите заново." << endl;
			_getch();
			break;
		}
		};
	} while (Choice != 0);
};
void findcats(Cats* _mas) 
{
	{
		int Choice(0);
		Cats mas[10] = { 0, 0, 0 };
		for (int i(0); i < 10; i++) 
		{
			mas[i] = _mas[i];
		}
		do
		{
			system("cls");
			cout << "Выберите режим поиска: 1 - Поиск кошачьих по имени" << endl << "2 - Поиск кошачьих по цвету" << endl << "3 - Поиск кошачьих по вредности" << endl << "4 - Выход в предыдущее меню " << endl << "Ваш выбор: ";
			cin >> Choice;
			cout << endl;
			switch (Choice)
			{
			case 1: //Поиск по имени. 
			{
				cout << "Имя искомого котенка: ";
				char Fname[10];
				cin >> Fname;
				cout << endl;
				cout << "Результат поиска: " << endl;
				bool flag = 0;		
				for (int j(0); j < 10; j++)
				{
					if (strcmp(&mas[j].name[0], &Fname[0]) == 0) 
					{
						cout << mas[j].name << endl;
						flag = 1; 
					}
				}
				if (flag == 0)
					cout << "Таких котят нет " << endl;
				cout << endl << "Нажмите любую клавишу для возврата в меню";
				_getch();
				Choice = 0;
				break;
			}
			case 2: //Поиск по  цвету
			{
				cout << "0 - Белые котята, 1 - серые, 2 - рыжие, 3 - коричневые, 4 - черные." << endl;
				cout << "Цвет искомого котенка: ";
				int Fcolor;
				cin >> Fcolor;
				cout << endl;
				cout << "Результат поиска: " << endl;
				bool flag = 0;
				for (int j(0); j < 10; j++)
				{
					if (mas[j].color == Fcolor)
					{
						cout << "Имя котенка: " << mas[j].name << " Цвет котенка: ";

						switch (mas[j].color)
						{
						case 0:
						{
							cout << "Белый" << endl;
							break;
						}
						case 1:
						{
							cout << "Серый" << endl;
							break;
						}
						case 2:
						{
							cout << "Рыжий" << endl;
							break;
						}
						case 3:
						{
							cout << "Коричневый" << endl;
							break;
						}
						case 4:
						{
							cout << "Черный" << endl;
							break;
						}
						}

						flag = 1;
					}
				}
				if (flag == 0)
					cout << "Таких котят нет " << endl;
				cout << endl << "Нажмите любую клавишу для возврата в меню";
				_getch();
				Choice = 0;
				break;
			}
			case 3: //Поиск по вредности
			{
				cout << "0 - Ми-ми-ми, можно тискать, 1 - обычный кот, 2 - лучше не трогать, 3 - бегите!" << endl;
				cout << "Вредность искомого котенка: ";
				int Fvred;
				cin >> Fvred;
				cout << endl;
				cout << "Результат поиска: " << endl;
				bool flag = 0;
				for (int j(0); j < 10; j++)
				{
					if (mas[j].vrednost == Fvred)
					{
						cout << "Имя котенка: " << mas[j].name << " Вредность котенка: ";
						switch (mas[j].vrednost)
						{
						case 0:
						{
							cout << "Ми-ми-ми, можно тискать" << endl;
							break;
						}
						case 1:
						{
							cout << "обычный кот" << endl;
							break;
						}
						case 2:
						{
							cout << "лучше не трогать" << endl;
							break;
						}
						case 3:
						{
							cout << "бегите!" << endl;
							break;
						}
						}
						flag = 1;
					}
				}
				if (flag == 0)
					cout << "Таких котят нет " << endl;
				cout << endl << "Нажмите любую клавишу для возврата в меню";
				_getch();
				Choice = 0;
				break;
			}
			case 4:
			{
				Choice = 0;
				break;
			}
			default:
			{
				cout << "Неверный ввод. Введите заново." << endl;
				_getch();
				break;
			}
			};
		} while (Choice != 0);
	};
};
int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(0));;
	cout << "Вы - владелец приюта и у одной из ваших кошек родилось 10 котят. Ну вот так вышло. Детей кошки можно различать по цвету и по характеру, которые даны им от рождения. А вот назвать их можно как угодно. Займитесь этим." << endl;
	Cats Koshki[10];
	for (int i(0); i < 10; i++)
	{
		cout << "Имя " << i + 1 << " котенка: ";
		char t[10];
		cin >> t;
		Koshki[i].setName(t);
	};
	//-----------Характеристики котят--------------
	for (int i(0); i < 10; i++)
	{
		int qC = rand() % 5;
		int qV = rand() % 4;
		Koshki[i].setColorVred(qC, qV);
	}
	short choice(0);
	cout << "Теперь Вы можете поработать с котятами. Нажмите любую клавишу." << endl;
	_getch();
	do
	{
		system("cls");
		cout << "Выберите действие: 1 - Провести операции с семейством кошачьих" << endl << "2 - Выйти из программы" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			short int q(0);
			do
			{
				system("cls");
				cout << "Выберите действие: 1 - Сортировка кошачьих по признаку" << endl << "2 - Поиск кошачьих по признаку " << endl << "3 - Выйти из программы " << endl;
				cin >> q;
				switch (q)
				{
				case 1:
				{
					sortingcats(Koshki);
					q = 0;
					break;
				};
				case 2:
				{
					findcats(Koshki);
					q = 0;
					break;
				};
				case 3: return(0);
				default:
				{
					cout << "Неверный ввод. Введите заново." << endl;
					_getch();
					break;
				}
				}
			} while (choice == 0);
			break;
		};
		case 2:
		{
			return(0);
		};
		default:
			cout << "Неверный ввод. Введите заново." << endl;
			_getch();
			break;
		};
	} while (choice != 1 || 2);
	_getch();
	return(0);
}