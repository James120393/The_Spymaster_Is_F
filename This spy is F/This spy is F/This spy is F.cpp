#include "stdafx.h"
using namespace std;

#include <stdlib.h>

int lineSpeed = 1000;

int opening(int alcohol)
{
	while (true)
	{
		cout << "Stukof the Russian spymaster has found his way to the small Welsh town of Connwy by train. Before stepping off the train Stukof has to make a decision which will you have him do?\n";
		Sleep(lineSpeed);
		cout << "  [1]You get Stukof to find his own way into town.\n";
		Sleep(lineSpeed);
		cout << "  [2]You get Stukof  to ask the conductor for directions \n";
		Sleep(lineSpeed);
		cout << "  [3]You get Stukof to shoot himself due to idiocy. \n";

		char c; //declare c to be of type char
		cin >> c;
		switch (toupper(c))
		{
		case '1':
			std::cout << "Stukov travels to town.";
			return alcohol;
		case '2':
			std::cout << "You get Stukof  to ask the conductor for directions\n";
			std::cout << "  CONDUCTOR: Hmm eager one aren’t you, it’s just down the street passed the city guard, watch out though their on the lookout for a russian spy.\n";
			std::cout << "  CONDUCTOR: Oh where are you from by the way?\n";
			std::cout << "  STUKOF: I see I’ll be sure to avoid them then, and my business is my own.\n";
			return alcohol;

		case '3':
			std::cout << "Stukof pulls a Makarov from his trenchcoat, puts it to his head and shouts MOTHER RUSSIA! and pulls the trigger";
			return -1;
		}
	}
}

int patrol(int alcohol)
{
	while (true)
	{
		cout << "Stukof sees the towns patrol in their poorly homemade uniforms, he's not sure if they're of any authority, what would you have him do?\n";
		Sleep(lineSpeed);
		cout << "  [1]Approach the least threatening town patrol member a 74 year old lady.\n";
		Sleep(lineSpeed);
		cout << "  [2]Avoid them.\n";
		Sleep(lineSpeed);
		cout << "  [3]Burst into flames.\n";

		char c; //declare c to be of type char
		cin >> c;
		switch (toupper(c))
		{
		case '1':
			cout << "STUKOF: Hello sister.\n";
			Sleep(lineSpeed);
			cout << "LADY: ...";
			Sleep(lineSpeed);
			cout << "STUKOF: What is your name?\n";
			Sleep(lineSpeed);
			cout << "LADY: (Confused by Stukof)\n";
			Sleep(lineSpeed);
			cout << "LADY: Fy enw i yw Edna. (IN HARDCORE WELSH)\n";
			Sleep(lineSpeed);
			cout << "STUKOF: oooooookaaaaay I need help to get to the bar can you show me where it is?\n";
			Sleep(lineSpeed);
			cout << "LADY: Cadarn ei lawr y ffordd , mynd i lawr , yn cymryd dde ac yna i'r chwith\n";
			Sleep(lineSpeed);
			cout << "STUKOF: (Confused).......?\n";
			Sleep(lineSpeed);
			cout << "LADY: (Stares at him blankly for being silent)\n";
			Sleep(lineSpeed);
			cout << "STUKOF: (Walks away on the path he was on)\n";
			Sleep(lineSpeed);
			break;
		case '2':
			Sleep(lineSpeed);
			cout << "STUKOF: (Avoids...)\n";
			return alcohol;

		case '3':
			Sleep(lineSpeed);
			cout << "STUKOF: (Dies...)\n";
			return -1;
		}
	}
}

/*int example(int alcohol)
{
	while (true)
	{
		cout << "Stukof the Russian spymaster has found his way to the small Welsh town of Connwy by train. Before stepping off the train Stukof has to make a decision which will you have him do?\n";
		Sleep(lineSpeed);
		cout << "  [1]";

		char c; //declare c to be of type char
		cin >> c;
		switch (toupper(c))
		{
		case '1':
			//alcohol++
			return alcohol++;
		case '2':
			//normal
			return alcohol;

		case '3':
			//death
			return -1;
		}
	}
}*/

int main()
{
	int alcohol = 0;
	bool girl = false;
	alcohol = opening(alcohol);

	if (alcohol == -1)
	{
		system("PAUSE");
		return 0;
	}

	while (true)
	{
		cout << "Where will you guide Stukof now?\n";
		Sleep(lineSpeed);
		cout << "  [1]The bar.\n";
		Sleep(lineSpeed);
		cout << "  [2]The shop \n";
		Sleep(lineSpeed);
		cout << "  [3]To the local patrolling guards\n";
		Sleep(lineSpeed);
		cout << "  [4]The heavily guarded village exit\n";
		Sleep(lineSpeed);
		cout << "  [5]The street\n";
		char c; //declare c to be of type char
		cin >> c;
		switch (toupper(c))
		{
		case '1':
			//bar scenario
			break;
		case '2':
			//shop scenario
			break;

		case '3':
			//patrolling scenario
			alcohol = patrol(alcohol);
			break;
		
		case '4':
			//exit scenario
			break;
		
		case '5':
			//street scenario
			break;
		}
		if (alcohol == -1)
		{
			system("PAUSE");
			return 0;
		}
	}

	system("PAUSE");
	return 0;
}

