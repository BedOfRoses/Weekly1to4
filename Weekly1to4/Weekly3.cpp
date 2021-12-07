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
		char yesOrNo{};

		std::cin >> number;
		if (guessNumber > number)
		{
			std::cout << "Too low, guess count: " << guessCount << std::endl;
		}
		
		else if (guessNumber < number)
		{
			std::cout << "Too high, guess count: " << guessCount<< std::endl;
		}


		if (correctNumber() == false)
		{
			highScore = guessCount;

			std::cout << "Your highscore is: " << highScore << std::endl;
			std::cout << "Think you can beat it?";
			std::cin >> yesOrNo;

			switch (yesOrNo)
			{
			case 'y': case'Y':
				randomizer();
				guess();
				break;
			case'n':case'N':
				std::cout << "Your highscore was: " << highScore << std::endl;
				exit(0);
				break;
			default:
				break;
			}

		}

	}

}

bool Weekly3::correctNumber()
{
	if (number == guessNumber)
	{
		std::cout << "You guessed :" << guessCount << " times" << std::endl;
		return false;
	}
	else
	{
		guessCount += 1;
		return true;
	}
}

int Weekly3::randomizer()
{
	srand(time(0));

	int randomNumber{};

	randomNumber = rand() % 52 + 1;

	return  guessNumber = randomNumber;

	
}
