#include "Weekly3.h"

void Weekly3::randomNumber()
{
	srand(time(0));
	guessNumber = rand() % 100 + 1;


	//return guessNumber;
}

void Weekly3::guess()
{

	while (correctNumber())
	{
		std::cin >> number;
		if (guessNumber > number)
		{
			std::cout << "Too low, guess count: " << guessCount << std::endl;
		}
		
		else if (guessNumber < number)
		{
			std::cout << "Too high, guess count: " << std::endl;
		}

	}

}

bool Weekly3::correctNumber()
{
	if (number == guessNumber)
	{
		std::cout << "You guessed :" << guessCount << std::endl;
		return false;
	}
	else
	{
		return true;
		guessCount += 1;
	}
}

int Weekly3::randomizer()
{
	srand(time(0));

	int randomNumber{};

	randomNumber = rand() % 52 + 1;

	return  guessNumber = randomNumber;

	
}
