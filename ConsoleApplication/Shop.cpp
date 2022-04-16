#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "Shop.h"
#include <string>

void Shop::init(std::string name, std::string type, std::string street, std::string cloak) {
	this->name = name;
	this->type = type;
	this->street = street;
	this->cloak = cloak;
}

void Shop::enter() {
	std::cout << "Введите название: ";
	getline(std::cin, name);
	std::cout << "\nВведите тип: ";
	getline(std::cin, type);
	std::cout << "\nВведите улицу: ";
	getline(std::cin, street);
	std::cout << "\nВведите часы работы: ";
	getline(std::cin, cloak);
}

void Shop::print() {
	std::cout << "\nИнформация о магазине:\nНазвание - " << name << "\nТип - " << type << "\nУлица - " << street << "\nЧасы работы - " << cloak << "\n", name, type, street, cloak;
}

void cloakShop(Shop &x) {
	char str1[5];
	char str2[5];
	int k = 0;
	for (int i = 0; i < 5; i++)
	{
		if (i == 2) i++;
		str1[k] = x.cloak.c_str()[i];
		str2[k] = x.cloak.c_str()[i + 6];
		k++;
	}
	int a = atoi(str2) / 100 - atoi(str1) / 100;
	int b = atoi(str2) % 100 - atoi(str1) % 100;
	if (b < 0) {
		b += 60;
		a--;
	}
	std::cout << "\nЧасы работы - " << x.cloak << "\nЧасы -  " << a << " \nМинуты - " << b << "\n";
}