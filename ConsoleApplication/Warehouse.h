#pragma once
class Warehouse
{
private:
	std::string products;
	int station;
public:
	void init(std::string products, int station);
	void enter();
	void print();
	int* cloakWarehouse(int x);
	void Poisk(std::string product);
};

