#pragma once
#include "FIO.h"
class Boxoffice
{
private:
	int workers;
	int count;
	FIO fio;
public:
	void init(int workers, int count, FIO fio);
	void enter();
	void print();
	int& cloakBoxoffice(int x);
	Boxoffice& operator ++();
	Boxoffice& operator ++(int x);
	Boxoffice operator +(const Boxoffice& other);
};

