#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "Warehouse.h"
#include <string>

void Warehouse::init(std::string products, int station) {
	this->products = products;
	this->station = station;
}

void Warehouse::enter() {
	std::cout << "\nТовар: ";
	getline(std::cin, products);
	std::cout << "Кол-во пунктов приема: ";
	std::cin >> station;
	while (getchar() != '\n');
}

void Warehouse::print() {
	std::cout << "\nСклад\nТовар - " << products << "\nПункты приема - " << station << "\n";
}

int* Warehouse::cloakWarehouse(int x) {
	int i = 0;
	int time = 0;
	while (i < x)
	{
		time += 15;
		i += station;
	}
	return &time;
}

void Warehouse::Poisk(std::string product) {
	size_t pos = products.find(product);
	if (pos != std::string::npos)
		std::cout << product << " есть на складе\n";
	else
		std::cout << product << " нет на складе\n";
}