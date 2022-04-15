#pragma once
class Shop {
private:
	std::string name;
	std::string type;
	std::string street;
	std::string cloak;
public:
	void init(std::string name, std::string type, std::string street, std::string cloak);
	void enter();
	void print();
	void cloakShop();
};

