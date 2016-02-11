#include "stdafx.h"
using namespace std;

#include <stdlib.h>

int main()
{

	string firstq;
	string mystr;
	cout << "Stukof the Russian spymaster has found his way to the small Welsh town of Connwy by train. Before stepping off the train Stukof has to make a decision which will you have him do?\n";
		Sleep(1500);
	cout << "  [1]You get Stukof to find his own way into town.\n";
		Sleep(1500);
	cout << "  [2]You get Stukof  to ask the conductor for directions \n";
		Sleep(1500);
	cout << "  [3]You get Stukof to shoot himself due to idiocy. \n";

	char c; //declare c to be of type char
	cin >> c;
	switch (toupper(c))
	{
	case '1':
		std::cout << "Stukov travels to town.";
		break;
	case '2':
		std::cout << "You get Stukof  to ask the conductor for directions\n";
		std::cout << "  CONDUCTOR: Hmm eager one aren’t you, it’s just down the street passed the city guard, watch out though their on the lookout for a russian spy.\n";
		std::cout << "  CONDUCTOR: Oh where are you from by the way?\n";
		std::cout << "  STUKOF: I see I’ll be sure to avoid them then, and my business is my own.\n";
		break;

	case '3':
		std::cout << "Stukof pulls a Makarov from his trenchcoat, puts it to his head and shouts MOTHER RUSSIA! and pulls the trigger";
		break;
	}

	system("PAUSE");
	return 0;
}

