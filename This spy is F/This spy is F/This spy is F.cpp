#include "stdafx.h"
//using namespace std;

#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <iostream>
#include <iostream>
#include <ctime>
#include <string>
#include <Windows.h>
#include <cstdlib>
#include <stdlib.h>

int lineSpeed = 1000;
bool girl = false;
bool guiness = false;

int shoprob()
{
	while (true)
	{
		std::cout << "Do you?\n";
		Sleep(lineSpeed);
		std::cout << "  [1]Tell him to give up\n";
		Sleep(lineSpeed);
		std::cout << "  [2]tell him to hide\n";
		Sleep(lineSpeed);
		std::cout << "  [3]tell him to keep running\n";
		Sleep(lineSpeed);
		std::cout << "  [4]tell him to do all above\n";
		char c; //declare c to be of type char
		std::cin >> c;
		std::cout << "Dead";
		return -1;

	}
}


int shop(int alcohol)
{
	while (true)
	{
		std::cout << "Stukof sees the towns local shop and enters it\n";
		Sleep(lineSpeed);
		std::cout << "  [1]Tell Stukof to look for vodka.\n";
		Sleep(lineSpeed);
		std::cout << "  [2]Tell Stukof to ask for directions to the vodka\n";
		Sleep(lineSpeed);
		std::cout << "  [3]Tell Stukof to shoot the cashier and run (Implying to grab the vodka first)\n";
		char c; //declare c to be of type char
		std::cin >> c;
		switch (toupper(c))
		{
		case '1':
			std::cout << "Stukof looks around the store for ten minutes and forgets what he’s looking for… Or maybe he forgot ten seconds in, either way he is now looking blankly at a very pretty white wash wall.\n";
			Sleep(lineSpeed);
			break;
		case '2':
			Sleep(lineSpeed);
			std::cout << "Stukof tracks down some one to strike a conversation with... Huzza he found a 5 year old boy sucking a lollipop\n";
			std::cout << "Stukof: Hello little boy…\n";
			Sleep(lineSpeed);
			std::cout << "Little boy: ...\n";
			Sleep(lineSpeed);
			std::cout << "Stukof: Where is the vodka? \n";
			Sleep(lineSpeed);
			std::cout << "The little boy points toward a rather pretty white wash with a single shelf a single item, the vodka. Stukof grabs the vodka and walks out the door.\n";
			Sleep(lineSpeed);
			return alcohol++;

		case '3':
			Sleep(lineSpeed);
			std::cout << "Stukof shoots the cashier and runs, The guards having heard a gunshot lay chase in a rather half assed fashion. You make a mental note to never imply anything ever again.\n";
			shoprob();
			return -1;
		}
	}
}

/*
int marketVendor(int alcohol)
{
	while (true)
	{
		std::cout << "In the main streets there is a market stall selling many things. Stukof seems interested and browses the goods.\n";
		Sleep(lineSpeed);
		std::cout << "  [1]Stukof purchases supplies for the journey.\n";
		Sleep(lineSpeed);
		std::cout << "  [2]Stukof sells the player to a jewelry merchant.\n";
		Sleep(lineSpeed);
		std::cout << "  [3]Stukof gets a job.\n";
		Sleep(lineSpeed);
		std::cout << "  [4]Stukof shoots himself.\n";
		Sleep(lineSpeed);

		char c; //declare c to be of type char
		std::cin >> c;
		switch (toupper(c))
		{
		case '1':
			std::cout << "Player: Stukof you need to buy some supplies for the journey ahead.\n";
			Sleep(lineSpeed);
			std::cout << "Stukof: Hello goods vendor I would like to purchase some 18mm ammunition, about 2000 bullets will do.";
			Sleep(lineSpeed);
			std::cout << "Player: Are you an idiot?\n";
			Sleep(lineSpeed);
			std::cout << "Stukof ignores the player and continues with the purchase\n";
			Sleep(lineSpeed);
			std::cout << "Vendor: Password accepted come with me\n";
			Sleep(lineSpeed);
			std::cout << "The vendor leads Stukof to a secret underground lair where many people are gathered looking suspicious.\n";
			Sleep(lineSpeed);
			std::cout << "Vendor: My brethren our glorious leader has arrived now the Russian mafia are ready to invade this town\n";
			Sleep(lineSpeed);
			std::cout << "Stukof looking confused accepts this role and becomes the mafia boss and rules the town for the remainder of his life.\n";
			Sleep(lineSpeed);
			std::cout << "GAME OVER\n";
			return -1;

		case '2':
			Sleep(lineSpeed);
			std::cout << "Stukof approaches a jewelry vendor and pulls off the ring “The Player”.\n";
			Sleep(lineSpeed);
			std::cout << "Stukof: How much for this solid gold ring?\n";
			Sleep(lineSpeed);
			std::cout << "Stukof hands the ring to the Vendor\n";
			Sleep(lineSpeed);
			std::cout << "Player:”Unhand me you fool or I will destroy you”\n";
			Sleep(lineSpeed);
			std::cout << "The vendor screams and runs for the hills.\n";
			Sleep(lineSpeed);
			std::cout << "Stukof picks up the ring and continues with his journey.\n";
			Sleep(lineSpeed);
			return alcohol;

		case '3':
			Sleep(lineSpeed);
			std::cout << "Stukof approaches a vendor with a “Help Wanted” sign and gets a job.\n";
			Sleep(lineSpeed);
			std::cout << "GAME OVER\n";
			return -1;

		case '4':
			Sleep(lineSpeed);
			std::cout << "Player: You’re and idiot shoot yourself.\n";
			Sleep(lineSpeed);
			std::cout << "Stukof pulls out his gun and shoots himself.\n";
			Sleep(lineSpeed);
			std::cout << "GAME OVER\n";
			return -1;
		}
	}
}
int oldman(int alcohol)
{
	while (true)
	{
		std::cout << "Stukof sees an elderly man with a half empty bottle of vodka in his hands. A impulse rushes through Stukof urging him to beat the and steal the bottle from him. Do you:\n";
		Sleep(lineSpeed);
		std::cout << "  [1]Get Stukof to back off and find another source of inebriation\n";
		Sleep(lineSpeed);
		std::cout << "  [2]Say nothing and let Stukof do his thing \n";
		Sleep(lineSpeed);
		std::cout << "  [3]Stukof goes back\n";
		char c; //declare c to be of type char
		std::cin >> c;
		switch (toupper(c))
		{
		case '1':
			Sleep(lineSpeed);
			std::cout << "Player: What are you thinking, don’t even try it.\n";
			std::cout << "Stukof: Don’t you tell me what to do\n";
			Sleep(lineSpeed);
			std::cout << "Player: Fine go ahead see if I care\n";
			Sleep(lineSpeed);
			std::cout << "Stukof reluctantly stops himself from pursuing the issue.\n";
			Sleep(lineSpeed);
			break;
		case '2':
			Sleep(lineSpeed);
			std::cout << "Stukof: Give me that vodka or I’ll introduce you to my friend PAIN!!\n";
			Sleep(lineSpeed);
			std::cout << "Old Man: Ahhhhhhhh you young lkrascalss this youth is fucked up Ahhhhhhhhh!!!";
			Sleep(lineSpeed);
			std::cout << "Stukof raises his fist and before he could even move the Old man jumps to his feet and smashes the bottle over Stukof’s head.";
			Sleep(lineSpeed);
			std::cout << "Stukof is dead dead\n";
			Sleep(lineSpeed);
			return -1;

		case '3':
			Sleep(lineSpeed);
			std::cout << "Stukof goes back\n";
			//generalp(alcohol);
			return -1;
		}
	}
}

int stables(int alcohol)
{
	while (true)
	{
		std::cout << "Stukof sees a horse and decides it would be a good idea to approach the horse.\n";
		Sleep(lineSpeed);
		std::cout << "Player: What are you doing?";
		Sleep(lineSpeed);
		std::cout << "Stukof: Just looking at this horse this horse is amazing\n";
		Sleep(lineSpeed);
		std::cout << "Player:........\n";
		Sleep(lineSpeed);
		std::cout << "Stukof: Have a stroke of its…\n";
		std::cout << "Player: Don’t even try it!!\n";
		generalp(alcohol);
		return -1;


	}
}

//int guard(int alcohol)
{
	while (true)
	{
		std::cout << "Stukof approaches the guard\n";
		Sleep(lineSpeed);
		std::cout << "Guard:.........?\n";
		Sleep(lineSpeed);
		std::cout << "Stukof:.........?\n";
		Sleep(lineSpeed);
		std::cout << "Guard:.........?\n";
		Sleep(lineSpeed);
		std::cout << "Stukof:.........?\n";
		Sleep(lineSpeed);
		std::cout << "Guard:.........?\n";
		Sleep(lineSpeed);
		std::cout << "Stukof:.........?\n";
		Sleep(lineSpeed);
		std::cout << "Guard:.........?\n";
		Sleep(lineSpeed);
		std::cout << "Stukof:.........?\n";
		Sleep(lineSpeed);
		std::cout << "Guard:.........?\n";
		Sleep(lineSpeed);
		std::cout << "Stukof:.........?\n";
		Sleep(lineSpeed);
		std::cout << "Guard:.........?\n";
		Sleep(lineSpeed);
		std::cout << "Stukof:.........?\n";
		Sleep(lineSpeed);
		std::cout << "Guard:.........?\n";
		Sleep(lineSpeed);
		std::cout << "Stukof:.........?\n";
		Sleep(lineSpeed);
		std::cout << "Guard:.........?\n";
		Sleep(lineSpeed);
		std::cout << "Stukof:.........?\n";
		Sleep(lineSpeed);
		std::cout << "Guard:.........?\n";
		Sleep(lineSpeed);
		std::cout << "Stukof:.........?\n";
		Sleep(lineSpeed);
		std::cout << "Guard:.........?\n";
		Sleep(lineSpeed);
		std::cout << "Stukof:.........?\n";
		Sleep(lineSpeed);
		std::cout << "Guard:.........?\n";
		Sleep(lineSpeed);
		std::cout << "Stukof:.........?\n";
		Sleep(lineSpeed);
		std::cout << "Guard:.........?\n";
		Sleep(lineSpeed);
		std::cout << "Stukof:.........?\n";
		Sleep(lineSpeed);
		std::cout << "Guard:.........?\n";
		Sleep(lineSpeed);
		std::cout << "Stukof:.........?\n";
		Sleep(lineSpeed);
		std::cout << "Guard:.........?\n";
		Sleep(lineSpeed);
		std::cout << "Stukof:.........?\n";
		Sleep(lineSpeed);
		std::cout << "Guard:.........?\n";
		Sleep(lineSpeed);
		std::cout << "Stukof:.........?\n";
		Sleep(lineSpeed);
		std::cout << "Guard:.........?\n";
		Sleep(lineSpeed);
		std::cout << "Stukof:.........?\n";
		Sleep(lineSpeed);
		std::cout << "Guard:.........?\n";
		Sleep(lineSpeed);
		std::cout << "Stukof:.........?\n";
		Sleep(lineSpeed);
		std::cout << "Guard:.........?\n";
		Sleep(lineSpeed);
		std::cout << "Stukof:.........?\n";
		Sleep(lineSpeed);
		std::cout << "Stukof Walks away because its been too long between staring at each other \n?";
		generalp(alcohol);
		return -1;

	}
}

//int generalp(int alcohol)
{
	while (true)
	{
		std::cout << "Outside Stukof sees\n";
		Sleep(lineSpeed);
		std::cout << "  [1]Drunken old man\n";
		Sleep(lineSpeed);
		std::cout << "  [2]Stables\n";
		Sleep(lineSpeed);
		std::cout << "  [3]Market stall salesman\n";
		Sleep(lineSpeed);
		std::cout << "  [4]Guard\n";
		char c; //declare c to be of type char
		std::cin >> c;
		switch (toupper(c))
		{
		case '1':
			oldman(alcohol);
			break;
		case '2':
			stables(alcohol);
			break;

		case '3':
			marketVendor(alcohol);
			break;
		case '4':
			guard(alcohol);
			break;
		}
	}
}
*/

int opening(int alcohol)
{
	while (true)
	{
		std::cout << "Stukof the Russian spymaster has found his way to the small Welsh town of Connwy by train. Before stepping off the train Stukof has to make a decision which will you have him do?\n";
		Sleep(lineSpeed);
		std::cout << "  [1]You get Stukof to find his own way into town.\n";
		Sleep(lineSpeed);
		std::cout << "  [2]You get Stukof  to ask the conductor for directions \n";
		Sleep(lineSpeed);
		std::cout << "  [3]You get Stukof to shoot himself due to idiocy. \n";

		char c; //declare c to be of type char
		std::cin >> c;
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
		std::cout << "Stukof sees the towns patrol in their poorly homemade uniforms, he's not sure if they're of any authority, what would you have him do?\n";
		Sleep(lineSpeed);
		std::cout << "  [1]Approach the least threatening town patrol member a 74 year old lady.\n";
		Sleep(lineSpeed);
		std::cout << "  [2]Avoid them.\n";
		Sleep(lineSpeed);
		std::cout << "  [3]Burst into flames.\n";

		char c; //declare c to be of type char
		std::cin >> c;
		switch (toupper(c))
		{
		case '1':
			std::cout << "STUKOF: Hello sister.\n";
			Sleep(lineSpeed);
			std::cout << "LADY: ...";
			Sleep(lineSpeed);
			std::cout << "STUKOF: What is your name?\n";
			Sleep(lineSpeed);
			std::cout << "LADY: (Confused by Stukof)\n";
			Sleep(lineSpeed);
			std::cout << "LADY: Fy enw i yw Edna. (IN HARDCORE WELSH)\n";
			Sleep(lineSpeed);
			std::cout << "STUKOF: oooooookaaaaay I need help to get to the bar can you show me where it is?\n";
			Sleep(lineSpeed);
			std::cout << "LADY: Cadarn ei lawr y ffordd , mynd i lawr , yn cymryd dde ac yna i'r chwith\n";
			Sleep(lineSpeed);
			std::cout << "STUKOF: (Confused).......?\n";
			Sleep(lineSpeed);
			std::cout << "LADY: (Stares at him blankly for being silent)\n";
			Sleep(lineSpeed);
			std::cout << "STUKOF: (Walks away on the path he was on)\n";
			Sleep(lineSpeed);
			break;
		case '2':
			Sleep(lineSpeed);
			std::cout << "STUKOF: (Avoids...)\n";
			return alcohol;

		case '3':
			Sleep(lineSpeed);
			std::cout << "STUKOF: (Dies...)\n";
			return -1;
		}
	}
}


/*int example(int alcohol)
{
	while (true)
	{
		std::cout << "Stukof the Russian spymaster has found his way to the small Welsh town of Connwy by train. Before stepping off the train Stukof has to make a decision which will you have him do?\n";
		Sleep(lineSpeed);
		std::cout << "  [1]";

		char c; //declare c to be of type char
		std::cin >> c;
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

int bar(int alcohol)
{
	while (true)
	{
		std::cout << "Stukov enters the bar, The first thing he notices is guards in the corner of the room, he then looks around at the layout of the room; paintings on the wall with qwerky macho things like those stuffed animal head things on the wall, in this case it was a Giraffe for some reason. Theres chart music is playing in the background off a radio. Stukof notices a beautiful woman wearing a very revealing silk red dress. Stukof approaches the bar & sits down. What do you tell him to do?\n";
		Sleep(lineSpeed);
		std::cout << "  [1]Have a drink\n";
		Sleep(lineSpeed);
		std::cout << "  [2]Have a drink which isn't vodka\n";
		if (guiness == true)
		{
			Sleep(lineSpeed);
			std::cout << "  [3]Ask guards to join you with your pint\n";
			Sleep(lineSpeed);
			std::cout << "  [4]Kill everyone\n";
			Sleep(lineSpeed);
			std::cout << "  [5]Tell the bartender a joke\n";
		}
		if (alcohol >= 1 && guiness == true)
		{
			Sleep(lineSpeed);
			std::cout << "  [6]Talk to the girl\n";
		}


		char c; //declare c to be of type char
		std::cin >> c;
		switch (toupper(c))
		{
			case '1':
				std::cout << "Stukof asks Bartender if he can have 3 shots of vodka\nStukof: “Can I have 3 shots of Russian Standard tripple distilled vodka please ? ”\nBartender “....Sure give me a second”\nBartender “Walks to the guards and points to stukof”\nPlayer:“Stukof Run”\nStukof:“Hes getting my drinks”\nPlayer:“By asking the guards ? ”\nStukof “......”\nStukof “Yes”\nPlayer “Im done, hes an idiot”";
				Sleep(lineSpeed);
				std::cout << "Do you wish to close the game? Y/N: ";
				std::cin >> c;
				if (toupper(c) == 'Y')
				{
					return -1;
				}
				else
				{
					std::cout << "Player “How you became a spy I have no idea”\nGuards approach Stukof and arrest him finding out he’s the spy they’re looking for, Stukof spends his remaining days in tough welsh jails getting his anal cavities ruptured by a guy named Jesse.";
				}
				return -1;
			case '2':
				std::cout << "Stukof “Can I have a pint of guinness please ? ”\nBartender “Sure”\nBartender fills a pint and gives it to him\n*Guinness get*";
				guiness = true;

			case '3':
				std::cout << "(Puts on a perfect welsh accent) “Gentlemen how about a pint?”\nGuards “We’re not really supposed”\nStukof “its on me, cmon!”\nGuards “sure, why not 1 drink no one will know”\nAfter the second pint with the guards getting him more and more drunk he decides to go\n to the bathroom \nStukov : “Im going to the toilet gentlemen”\nSlightly drunk Guards “AHHHHHHH BREAKING THE SEAL!!!!”\nStukof : “Bladder of a little girl AHAHAHAHA”\nGuards return the laughter\nStukov goes to the toilet into a cubical & throws up, throwing up activated Stukofs hidden\n genius, he had something hes never had before something that could change his life\n forever, AN IDEA.Stukov made an advanced camera from his shoe lace, the speaker from his\n dead phone and the metal handle from the toilet.He wraps the so called wire around his chest\n while plastd::cing the device on the centre, the camera would be disguised as a button on his coat.\n He walks back outside and asks each individual by their full name if they wanted another drink\n normally this would be suspicious but theyre drunk so they dont care.As they leave the bar he\n asks the guards if they can escort him out of the town, if they ask for security checks he\nthreatens them with the recorded tape of them drinking while on duty.They comply and escort him.\nGAME WON";
				return -1;
			
			case '4':
				if (guiness == true)
				{
					std::cout << "Stukof Shoots everyone and himself\nDEAD";
					return -1;
				}
			
			case '5':
				if (guiness == true)
				{
					std::cout << "Stukof tells the “Horse walks into a bar Joke” to the bartender\nStukof “Want to hear a joke ? ”\nBartender “Errrr Sure, why not”\nStukof “Sad Horse walks into a bar, the barman says why the long face”\nBartender “.......”\nBartender pulls the shotgun from under the bar and shoots him.\n";
					return -1;
				}

			case '6':
				if (alcohol >= 1 && guiness == true)
				{
					std::cout << "Stukof:”Hello pretty lady”\nGirl : ”Hey there handsome, hows about you buy a lady a drink”\nPlayer”Stukof, this could be our ticket out of here, quick get her to leave with you”\nStukof replies to both : ”Not a problem”\nStukof and the girl end up having a wonderful evening eventually leaving the bar and going out of\ntown.\nMISSION ACCOMPLISHED";
					return -1;
				}
				
		}
	}
}

int main()
{
	system("Title This Spy is Fu**ed");
	int alcohol = 0;
	alcohol = opening(alcohol);

	if (alcohol == -1)
	{
		system("PAUSE");
		return 0;
	}

	while (true)
	{
		std::cout << "Where will you guide Stukof now?\n";
		Sleep(lineSpeed);
		std::cout << "  [1]The bar.\n";
		Sleep(lineSpeed);
		std::cout << "  [2]The shop \n";
		Sleep(lineSpeed);
		std::cout << "  [3]To the local patrolling guards\n";
		Sleep(lineSpeed);
		std::cout << "  [4]The street\n";
		char c; //declare c to be of type char
		std::cin >> c;
		switch (toupper(c))
		{
		case '1':
			//bar scenario
			alcohol = bar(alcohol);
			break;
		case '2':
			//shop scenario
			alcohol = shop(alcohol);
			break;

		case '3':
			//patrolling scenario
			alcohol = patrol(alcohol);
			break;
		
		case '4':
			//street scenario
			//generalp();
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

