#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <Windows.h>

//Use function for these tasks.
//
//for this assignment upload the cpp file only
//
//Create a menu that allows user to select tasks : for example
//a.Task 1
//b.Task 2
//c.Task 3
//d.Task 4
//e.Task 5
//f.Task 6
//q.Quit
//which tasks you want to run :
//if user enters number specific characters then it calls a task function, 
// and if user enters q or 'Q' it quits the program;
//
//use exit(0);  to exit the program.
//
//
//
//Write a program that prints numbers from 1 to 100
//Use a while - loop
//Use a for - loop
//
//Write a program that writes numbers from 100 down to 1 to screen.
//Use a for - loop
//
//Make a program that writes 5 to 50 in steps of 5. Use a while loop. (should print 5 10 15 20 25, etc.)
//Make a program that writes 5 to 50 in steps of 5. Use a for loop. (should print 5 10 15 20 25, etc.)
//Make a program that writes 5 to 50 in steps of 5. Use Do ..while.(should print 5 10 15 20 25, etc.)
//Make a program that asks the user what grade they want in Programming 1.
//If the answer is A, write "Outstanding".
//If the answer is B, write "Very good".
//If the answer is C, write "Good".
//If the answer is D, write "Some flaws".
//If the answer is E, write "Not very good...".
//If the answer is F, write "Fail".
//If the answer is something else, write "That is not a grade!". (Use switch - case)

class Weekly2
{

public:
	
	int num{};

	void menu();

	void task1();
	void task2();
	void task3();
	void task4();


};

