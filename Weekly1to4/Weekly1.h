#pragma once
#include <iostream>
#include <string>


class Weekly1
{
public:
	std::string fullName{};
	char initial{};
	int age{};
	long int phoneNum{};
	int day{};
	int month{};
	int year{};

	void information()
	{
		std::cout << "What is ur name: ";
		getline(std::cin, fullName);

		std::cout << "What is ur age: ";
		std::cin >> age;

		std::cout << "What is ur initial: ";
		std::cin >> initial;

		std::cout << "What is ur num: ";
		std::cin >> phoneNum;

		std::cout << "when is your birthday";
		whenIsBirthDay(day, month, year);

		std::cout << "|" << fullName << std::endl;
		std::cout << "|" << age << std::endl;
		std::cout << "|" << initial << std::endl;
		std::cout << "|" << phoneNum << std::endl;
		

	}

	void whenIsBirthDay(int a, int b, int c)
	{
		std::cout << "Date: ";
		std::cin >> a;
		std::cout << "Month: ";
		std::cin >> b;
		std::cout << "Year: ";
		std::cin >> c;
		
		std::string first = std::to_string(a);
		std::string second = std::to_string(b);
		std::string third = std::to_string(c);

		

			std::cout << a << " / " << b << " / " << c;
	}

	void task2();

	void task3();

	void task4();
};

