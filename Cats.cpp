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
	void setName(char* _name) //������� ���������� ������� �����
	{
		for (int i(0); i<10; i++)
			name[i] = _name[i];
	}
	char* getName() //������� ��������� ����� �������
	{
		return name;
	}
	void setColorVred(int _color, int _vred) //������� ���������� ������� ����� � ���������
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
		cout << "�������� ������� ����������: 1 - ���������� �������� �� ����� (� ���������� �������)" << endl << "2 - ���������� �������� �� ����� (�� ������� �� ������)" << endl << "3 - ���������� �������� �� ��������� (�� ������� �� �������) " << endl << "4 - ����� � ���������� ���� " << endl << "��� �����: ";
		cin >> Choice;
		cout << endl;
		switch (Choice)
		{
		case 1: //���������� �� ��������. 
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
			cout << "��������� ����������: " << endl; 
			for (int i(0); i < 10; i++)
				cout << mas[i].name << endl;
			cout << "������� ����� ������� ��� �������� � ����";
			_getch();
			Choice = 0;
			break;
		}
		case 2: //���������� ��  �����
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
			cout <<  "��������� ���������� : " << endl;
			for (int i(0); i < 10; i++)
			{
				cout << " ��� �������: " << mas[i].name << " ���� �������: ";
				switch (mas[i].color)
				{
				case 0:
				{
					cout << "�����" << endl;
					break;
				}
				case 1:
				{
					cout << "�����" << endl;
					break;
				}
				case 2:
				{
					cout << "�����" << endl;
					break;
				}
				case 3:
				{
					cout << "����������" << endl;
					break;
				}
				case 4:
				{
					cout << "������" << endl;
					break;
				}
				}
			}
			cout << "������� ����� ������� ��� �������� � ����";
			_getch();
			Choice = 0;
			break;
		}
		case 3: //���������� �� ���������
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
			cout << "��������� ���������� : " << endl;
			for (int i(0); i < 10; i++)
			{
				cout << " ��� �������: " << mas[i].name << " ��������� �������: ";
				switch (mas[i].vrednost)
				{
				case 0:
				{
					cout << "��-��-��, ����� �������" << endl;
					break;
				}
				case 1:
				{
					cout << "������� ���" << endl;
					break;
				}
				case 2:
				{
					cout << "����� �� �������" << endl;
					break;
				}
				case 3:
				{
					cout << "������!" << endl;
					break;
				}
				}
			}
			cout << "������� ����� ������� ��� �������� � ����";
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
			cout << "�������� ����. ������� ������." << endl;
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
			cout << "�������� ����� ������: 1 - ����� �������� �� �����" << endl << "2 - ����� �������� �� �����" << endl << "3 - ����� �������� �� ���������" << endl << "4 - ����� � ���������� ���� " << endl << "��� �����: ";
			cin >> Choice;
			cout << endl;
			switch (Choice)
			{
			case 1: //����� �� �����. 
			{
				cout << "��� �������� �������: ";
				char Fname[10];
				cin >> Fname;
				cout << endl;
				cout << "��������� ������: " << endl;
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
					cout << "����� ����� ��� " << endl;
				cout << endl << "������� ����� ������� ��� �������� � ����";
				_getch();
				Choice = 0;
				break;
			}
			case 2: //����� ��  �����
			{
				cout << "0 - ����� ������, 1 - �����, 2 - �����, 3 - ����������, 4 - ������." << endl;
				cout << "���� �������� �������: ";
				int Fcolor;
				cin >> Fcolor;
				cout << endl;
				cout << "��������� ������: " << endl;
				bool flag = 0;
				for (int j(0); j < 10; j++)
				{
					if (mas[j].color == Fcolor)
					{
						cout << "��� �������: " << mas[j].name << " ���� �������: ";

						switch (mas[j].color)
						{
						case 0:
						{
							cout << "�����" << endl;
							break;
						}
						case 1:
						{
							cout << "�����" << endl;
							break;
						}
						case 2:
						{
							cout << "�����" << endl;
							break;
						}
						case 3:
						{
							cout << "����������" << endl;
							break;
						}
						case 4:
						{
							cout << "������" << endl;
							break;
						}
						}

						flag = 1;
					}
				}
				if (flag == 0)
					cout << "����� ����� ��� " << endl;
				cout << endl << "������� ����� ������� ��� �������� � ����";
				_getch();
				Choice = 0;
				break;
			}
			case 3: //����� �� ���������
			{
				cout << "0 - ��-��-��, ����� �������, 1 - ������� ���, 2 - ����� �� �������, 3 - ������!" << endl;
				cout << "��������� �������� �������: ";
				int Fvred;
				cin >> Fvred;
				cout << endl;
				cout << "��������� ������: " << endl;
				bool flag = 0;
				for (int j(0); j < 10; j++)
				{
					if (mas[j].vrednost == Fvred)
					{
						cout << "��� �������: " << mas[j].name << " ��������� �������: ";
						switch (mas[j].vrednost)
						{
						case 0:
						{
							cout << "��-��-��, ����� �������" << endl;
							break;
						}
						case 1:
						{
							cout << "������� ���" << endl;
							break;
						}
						case 2:
						{
							cout << "����� �� �������" << endl;
							break;
						}
						case 3:
						{
							cout << "������!" << endl;
							break;
						}
						}
						flag = 1;
					}
				}
				if (flag == 0)
					cout << "����� ����� ��� " << endl;
				cout << endl << "������� ����� ������� ��� �������� � ����";
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
				cout << "�������� ����. ������� ������." << endl;
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
	cout << "�� - �������� ������ � � ����� �� ����� ����� �������� 10 �����. �� ��� ��� �����. ����� ����� ����� ��������� �� ����� � �� ���������, ������� ���� �� �� ��������. � ��� ������� �� ����� ��� ������. ��������� ����." << endl;
	Cats Koshki[10];
	for (int i(0); i < 10; i++)
	{
		cout << "��� " << i + 1 << " �������: ";
		char t[10];
		cin >> t;
		Koshki[i].setName(t);
	};
	//-----------�������������� �����--------------
	for (int i(0); i < 10; i++)
	{
		int qC = rand() % 5;
		int qV = rand() % 4;
		Koshki[i].setColorVred(qC, qV);
	}
	short choice(0);
	cout << "������ �� ������ ���������� � ��������. ������� ����� �������." << endl;
	_getch();
	do
	{
		system("cls");
		cout << "�������� ��������: 1 - �������� �������� � ���������� ��������" << endl << "2 - ����� �� ���������" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			short int q(0);
			do
			{
				system("cls");
				cout << "�������� ��������: 1 - ���������� �������� �� ��������" << endl << "2 - ����� �������� �� �������� " << endl << "3 - ����� �� ��������� " << endl;
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
					cout << "�������� ����. ������� ������." << endl;
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
			cout << "�������� ����. ������� ������." << endl;
			_getch();
			break;
		};
	} while (choice != 1 || 2);
	_getch();
	return(0);
}