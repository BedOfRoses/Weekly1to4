#pragma once

#include <iostream>
#include <conio.h>
#include <vector>
#include <ctime>

class Weekly3
{
public:
	
	int guessCount{};

	int number{};
	int guessNumber{};

	void randomNumber();

	void guess();
	bool correctNumber();

	int randomizer();

	

};

