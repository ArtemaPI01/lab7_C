#pragma once
class FIO
{
private:
	std::string name;
	std::string surname;
	std::string patronymic;
public:
	void init(std::string name, std::string surname, std::string patronymic);
	void enter();
	void print();
};

