#pragma once
#include "FIO.h"
class Owner
{
private:
	FIO fio;
	int income;
	int expenses;
public:
	void init(FIO fio, int income, int expenses);
	void enter();
	void print();
	int profitOwner();
};

