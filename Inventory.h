#pragma once
#include <string>

class Inventory
{
private:
	std::string itemName;
	double itemPrice;
	int unitsAvailable;

public:
	void setItemName(std::string name);
	void setItemPrice(double price);
	void setUnitsAvailable(int units);

	std::string getItemName();
	double getItemPrice();
	int getUnitsAvailable();

	Inventory();
	Inventory(std::string name, double price, int units);

	double calculateTotalValue();
};