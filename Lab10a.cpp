#include "Inventory.h"
#include<iostream>

int main()
{
	Inventory item1;
	Inventory item2{ "note", 1.15, 10 };

	std::cout << "Item 1 is " << item1.getItemName() << std::endl;
	std::cout << "The price of this item is " << item1.getItemPrice() << std::endl;
	std::cout << "The units available of this item is " << item1.getUnitsAvailable() << std::endl;
	std::cout << "\nItem 2 is " << item2.getItemName() << std::endl;
	std::cout << "The price of this item is " << item2.getItemPrice() << std::endl;
	std:: cout << "The units available of this item is " << item2.getUnitsAvailable() << std::endl;

	item1.setItemName("pen");
	item1.setItemPrice(1.16);
	item1.setUnitsAvailable(20);

	std::cout << "\n<The final total value>" << std::endl;
	std::cout << "The total value of " << item1.getItemName() << ":$" << item1.calculateTotalValue() << std::endl;
	std::cout << "The total value of " << item2.getItemName() << ":$" << item2.calculateTotalValue() << std::endl;

	return 0;
}
