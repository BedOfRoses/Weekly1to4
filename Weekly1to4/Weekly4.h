#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <conio.h>

/*
2. Make an empty 10x 10 char array  - a 1 or 2D array,
or Vector. This is for example used in a chess board or Pacman.

2.1  use getch() or _getch() to get a key from user : for instance arrow keys
or ( a - w- s -d ) keys to move around the table. 

2.2   starting point can be either random or you can start from ( 0).   
2.3  put  char '\\' and '/'  in the 2 different places on your board, 
and if you get to char / go one level down and if you get to \ go one level up 
and if get to char 'G' your program will terminate,
otherwise you can freely move around.
*/

class Weekly4
{
public:
	std::vector<std::vector<char>> board{ 
		{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
		{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
		{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
		{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
		{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
		{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
		{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
		{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
		{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
		{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}
	};

	char player{};
	void printBoard();
	void createPlayer();
	void move();


};

