// Определить структуру abonent со следующими компонентами: номер телефона, фамилия абонента, 
// - адрес (город, улица, дом, квартира), баланс.
// Составить список абонентов сотовой телефонной сети из 5 человек с заданным структурным типом.
// Вывести список в виде таблицы.
// Получить список абонентов, проживающих в городе, введенном с клавиатуры пользователем.
// Пополнить баланс абонента по его номеру.Если номер не найден, вывести сообщение об ошибке.
// Определить абонента с максимальным балансом

#include <cstdio>
#include <cmath>
#include <iostream>
#include <cstdlib>
#include <random>
#include <time.h>
#include <cstring>
#include <iomanip>
using namespace std;
class adress
{
public:
	char town[15];
	char street[25];
	int house_num;
	int flat_num;
};
class abonement
{
public:
	char phone_number[12];
	char name[25];
	struct adress adr;
	int check;
};
//****************
void output(abonement List[])
{
	int i;
	for (i = 0; i < 4; i++)
	{
		cout << List[i].phone_number << " " << List[i].name << " " << List[i].adr.town << " " << List[i].adr.street << " " << List[i].adr.house_num << " " << List[i].adr.flat_num << " " << List[i].check;
		cout << endl;
	}
};
void compare_town(abonement List[] ,char * input_town)
{
	int i, count = 0;
	cout << "Данные пользователей проживающих в заданом городе: " << endl;
	for (i = 0; i < 4; i++)
	{
		if (List[i].adr.town == input_town)
		{
			count++;
			cout << List[i].phone_number << " " << List[i].name << " " << List[i].adr.town << " " << List[i].adr.street << " " << List[i].adr.house_num << " " << List[i].adr.flat_num << " " << List[i].check;
			cout << endl;
		}
	}
	if (count == 0)
	{
		cout << "Данные не найдены";
	}
	if (count > 0)
	{
		cout << "Итого: " << count << endl;
	}
	
};
//****************
int main()
{
	system("chcp 1251");
	system("cls");
	int i = 0;
	char input_town[15];
	abonement List[] =
	{
		"001", "Ваcя1", "Орск1", "Васянская1", 1, 1, 0,
		"002", "Ваcя2", "Орск2", "Васянская2", 2, 2, 0,
		"003", "Ваcя3", "Орск3", "Васянская3", 3, 3, 0,
		"004", "Ваcя4", "Орск4", "Васянская4", 4, 4, 0,
	};
	output(List);
	cout << "Введите город: " << endl;
	cin.getline(input_town, 15);
	compare_town(List, input_town);

}

	

