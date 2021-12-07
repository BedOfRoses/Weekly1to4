#include "Weekly4.h"

void Weekly4::printBoard()
{
	std::cout << "---------------------\n";
	for (int i = 0; i < board.size(); i++)
	{
		std::cout << '|';
		for (int j = 0; j < board.size(); j++)
		{
			std::cout << board[i][j] << '|';
		}
		std::cout << '\n';
	}
	std::cout << "---------------------\n";

}

void Weekly4::createPlayer()
{

	board[0][0] = player;

}

void Weekly4::move()
{

	char playerInput = _getch();

	switch (playerInput)
	{
	case 'a':case'A':
		
		break;
	case 'w':case'W':

		break;
	case 'd':case'D':

		break;
	case 's':case'S':
		
		break;

	default:
		break;
	}



}
