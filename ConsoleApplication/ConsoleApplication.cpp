#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "locale.h"
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <Windows.h>
#include "Shop.h"
#include "Owner.h"
#include "Boxoffice.h"
#include "Warehouse.h"
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	Shop* Ashan;
	Owner* Alisher;
	Boxoffice box;
	Warehouse* house;
	Ashan = new Shop[1];
	for (int i = 0; i < 1; i++)
	{
		Ashan[i].enter();
		Ashan[i].print();
		cloakShop(Ashan[i]);
	}
	delete[] Ashan;
	Alisher = new Owner;
	Alisher->enter();
	Alisher->print();
	delete Alisher;
	house = new Warehouse;
	(*house).init("Арбуз Тыква Огурец", 7);
	(*house).print();
	int t = 20;
	cout << "\nСкорость разгрузки "<< t <<" тонн в минутах: " << *(*house).cloakWarehouse(20) << "\n";
	(*house).Poisk("Тыква");
	delete house;
	box.enter();
	box.print();
	int x = 100;
	cout << "\nВремя обслуживания " << x << " клиентов - " << box.cloakBoxoffice(x) << " минуты\n";
	_getch;
}