#include "Weekly2.h"
#include <conio.h>

void Weekly2::menu()
{
	char chooseTask{};
	std::cin >> chooseTask;

		switch (chooseTask)
		{
		case 'a': case'A':
			task1();
			break;
			
		case'b':
			task2();
			break;

		case 'c':
			task3();
			break;

		case 'd':
			task4();
			break;

		case 'e':
			std::cout << "lmao" << std::endl;
			break;

		case 'f':
			//Task 6
			break;

		case 'q': case'Q':
			exit(0);
			break;

		default:
			break;
		}

}

void Weekly2::task1()
{
	std::cout << "This is a while-loop" << std::endl;
	while (num <= 100)
	{
		Sleep(10);
		std::cout << num << std::endl;
		num++;
	}
	Sleep(2000);
	
	system("cls");

	std::cout << "For-loop" << std::endl;
	for (int i = 0; i <= 100; i++)
	{
		Sleep(10);
		std::cout << i << std::endl;
	}



}

void Weekly2::task2()
{

	for (int i = 100; 0 <= i; --i)
	{
		Sleep(10);
		std::cout << i << std::endl;

	}

}

void Weekly2::task3()
{
	//Make a program that writes 5 to 50 in steps of 5. 
	//Use a while loop. (should print 5 10 15 20 25, etc.)
	
	while (num <= 50)
	{
		std::cout << num << std::endl;
		num += 5;
	}


	
}

void Weekly2::task4()
{

	for (num = 1; num <= 50; num++)
	{
		num += 4;
		std::cout << num << std::endl;

	}

}
