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
	Boxoffice* b;
	Warehouse* a;
	Ashan = new Shop[1];
	for (int i = 0; i < 1; i++)
	{
		Ashan[i].enter();
		Ashan[i].print();
		Ashan[i].cloakShop();
	}
	delete[] Ashan;
	Alisher = new Owner;
	Alisher->enter();
	Alisher->print();
	delete Alisher;
	a = new Warehouse;
	(*a).init("Арбуз Тыква Огурец", 7);
	(*a).print();
	int t = 20;
	std::cout << "\nСкорость разгрузки "<< t <<" тонн в минутах: " << (*a).cloakWarehouse(20) << "\n";
	(*a).Poisk("Тыква");
	delete a;
	b = new Boxoffice;
	b->enter();
	b->print();
	b->cloakBoxoffice(100);
	delete b;
	_getch;
}