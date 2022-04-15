#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "Boxoffice.h"
#include <string>

void Boxoffice::init(int w, int c, FIO f) { //Метод создания 
	this->workers = workers;
	this->count = count;
	this->fio = fio;
}

void Boxoffice::enter() {
	std::cout << "\nВведите ФИО старшего кассира : ";
	fio.enter();
	std::cout << "Введите кол-во касс рабочих: ";
	std::cin >> workers;
	std::cout << "\nВведите кол-во касс: ";
	std::cin >> count;
	while (getchar() != '\n');
}

void Boxoffice::print() {
	std::cout << "\nКасса:\nКол-во рабочих - " << workers << "\nКол - во касс - " << count;
	fio.print();
}

int& Boxoffice::cloakBoxoffice(int x) {
	int a;
	if (count - workers < 0)
		a = (x / count) * 2;
	else
		a = (x / workers) * 2;
	return a;
}
