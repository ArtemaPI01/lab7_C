#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "FIO.h"
#include <string>

void FIO::init(std::string name, std::string surname, std::string patronymic) {
	this->name = name;
	this->surname = surname;
	this->patronymic = patronymic;
}
void FIO::enter() {
	std::cout << "\nВведите имя: ";
	getline(std::cin, name);
	std::cout << "\nВведите фамилию: ";
	getline(std::cin, surname);
	std::cout << "\nВведите отчество: ";
	getline(std::cin, patronymic);
}
void FIO::print() {
	std::cout << "\nИмя: " << name << " Фамилия: " << surname << " Отчество : " << patronymic;
}
