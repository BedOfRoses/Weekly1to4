#include "Weekly1.h"

void Weekly1::task2()
{
	std::cout << "whats ur name" << std::endl;
	std::cin >> fullName;
	std::cout << "Whar ur age? " << std::endl;
	std::cin >> age;

	std::cout << "You like coffee?" << std::endl;
	char yesOrNo{};

	std::cin >> yesOrNo;

	switch (yesOrNo)
	{
	case 'y':case'Y':
		std::cout << "Seems like you like coffee" << std::endl;
		break;
	case 'N':case'n':
		std::cout << "not a coffee type huh.." << std::endl;
		break;
	default:
		break;
	}


}

void Weekly1::task3()
{

	std::cout << "Whats ur age? " << std::endl;
	std::cin >> age;

	if (age <= 20) {
		std::cout << "yung boi";
	}

	else if (age >=21 && age <= 40)
	{
		std::cout << "Grownup boyyyee" << std::endl;
	}

	else if (age >= 41 && age <= 59)
	{
		std::cout << "Hahaa old menss))))" << std::endl;
	}

	else if (age <= 60)
	{
		std::cout << "Sheesh old fart" << std::endl;
	}


}

void Weekly1::task4()
{
	std::cout << "What is your favorite drink?\n1.Coffee\n2.Tea\n3.Coca Cola"<< std::endl;
	
	int oneToThree{};

	std::cin >> oneToThree;
	switch (oneToThree)
	{
	case 1:
		std::cout << "MMMM coffe boi" << std::endl;
		break;
	case 2:
		std::cout << "Oyyy mate, tea is guud" << std::endl;
		break;
	case 3:
		std::cout << "Coca cola overrated lmao xdddd" << std::endl;
		break;
	default:
		break;
	}
}

