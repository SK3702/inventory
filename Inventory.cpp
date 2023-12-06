#include "Inventory.h"


void Inventory::setItemName(std::string name)
{
	itemName = name;
}
void Inventory::setItemPrice(double price)
{
	itemPrice = price;
}
void Inventory::setUnitsAvailable(int units)
{
	unitsAvailable = units;
}

std::string Inventory::getItemName()
{
	return itemName;
}
double Inventory::getItemPrice()
{
	return itemPrice;
}
int Inventory::getUnitsAvailable() 
{
	return unitsAvailable;
}

Inventory::Inventory()
{
	setItemName("TBD");
	setItemPrice(0.00);
	setUnitsAvailable(0);
}
Inventory::Inventory(std::string name, double price, int units)
{
	itemName = name;
	itemPrice = price;
	unitsAvailable = units;
}

double Inventory::calculateTotalValue()
{
	return itemPrice * unitsAvailable;
}