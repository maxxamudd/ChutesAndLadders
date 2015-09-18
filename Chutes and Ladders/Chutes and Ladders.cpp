// Name: Chutes and Ladders
// Programmer: Maxx Mudd on 3/23/2015

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;;

// players
class Players
{
public:
	// member functions
	int Roll(int pos, string name);
	int Chute(int pos, string name);
	int Ladder(int pos, string name);

	// member variables
	string name;
	int position = 0;
};

// functions
void ShowRules(char rules);
void EnterNames(int numPlayers);
void ShowWinner(int pos1, int pos2, int pos3, int pos4, string name1, string name2, string name3, string name4);

// instantiate players
Players p1;
Players p2;
Players p3;
Players p4;

void ShowRules(char rules)
{
	// if yes, show rules
	if (rules == 'y')
	{
		cout << "- Each player starts at 0, and tries to progress up the board to 100." << endl;
		cout << "- Players take turns rolling a six-sided die to move up the board." << endl;
		cout << "- First player to reach square 100 wins." << endl;
		cout << "- If you land on a chute, you will slide back down the board." << endl;
		cout << "- If you land on a ladder, you move up the board." << endl << endl;

	}
	// if no, continue
	else if (rules == 'n')
	{

	}
}

void EnterNames(int numPlayers)
{
	// if 2 players, get both player names
	if (numPlayers == 2)
	{
		cout << "Enter a name for player 1: ";
		cin >> p1.name;

		cout << "Enter a name for player 2: ";
		cin >> p2.name;

		// greet both players
		cout << endl << "Ok " << p1.name << " and " << p2.name << "! Let's get started!" << endl << endl;
	}
	// if 3 players, get all 3 player names
	else if (numPlayers == 3)
	{
		cout << "Enter a name for player 1: ";
		cin >> p1.name;

		cout << "Enter a name for player 2: ";
		cin >> p2.name;

		cout << "Enter a name for player 3: ";
		cin >> p3.name;

		// greet all 3 players
		cout << endl << "Ok " << p1.name << ", " << p2.name << ", and " << p3.name << "! Let's get started!" << endl << endl;
	}
	// if 4 players, get all 4 player names
	else if (numPlayers == 4)
	{
		cout << "Enter a name for player 1: ";
		cin >> p1.name;

		cout << "Enter a name for player 2: ";
		cin >> p2.name;

		cout << "Enter a name for player 3: ";
		cin >> p3.name;

		cout << "Enter a name for player 4: ";
		cin >> p4.name;

		// greet all 4 players
		cout << endl << "Ok " << p1.name << ", " << p2.name << ", and " << p3.name << ", and " << p4.name << "! Let's get started!" << endl << endl;
	}
}

int Players::Roll(int pos, string name)
{
	// roll die, show result
	srand(static_cast<unsigned int>(time(0)));
	int randomNumber = rand();
	int die = (randomNumber % 6) + 1;
	cout << name << " rolled a " << die << "!" << endl << endl;
	// move player
	pos += die;

	return pos;
}

int Players::Chute(int pos, string name)
{
	// check if player lands on chute, display message
	if (pos == 98)
	{
		pos = 78;
		cout << "Oh no! " << name << " has landed on a chute at square 98!" << endl << endl;
	}
	else if (pos == 95)
	{
		pos = 75;
		cout << "Yikes! " << name << " has landed on a chute at square 95!" << endl << endl;
	}
	else if (pos == 93)
	{
		pos = 70;
		cout << "Bummer! " << name << " has landed on a chute at square 93!" << endl << endl;
	}
	else if (pos == 87)
	{
		pos = 24;
		cout << "NOOOOOOOO! " << name << " has landed on the worst chute of them all at square 87!" << endl << endl;
	}
	else if (pos == 64)
	{
		pos = 60;
		cout << "Doh! " << name << " has landed on a chute at square 64!" << endl << endl;
	}
	else if (pos == 62)
	{
		pos = 19;
		cout << "NOOOOOOOO! " << name << " has landed on a chute at square 62!" << endl << endl;
	}
	else if (pos == 56)
	{
		pos = 53;
		cout << "Doh! " << name << " has landed on a chute at square 56!" << endl << endl;
	}
	else if (pos == 49)
	{
		pos = 11;
		cout << "Oh no! " << name << " has landed on a chute at square 49!" << endl << endl;
	}
	else if (pos == 48)
	{
		pos = 26;
		cout << "Bummer! " << name << " has landed on a chute at square 48!" << endl << endl;
	}
	else if (pos == 16)
	{
		pos = 6;
		cout << "Oops! " << name << " has landed on a chute at square 16!" << endl << endl;
	}
	else
	{
		
	}

	return pos;
}

int Players::Ladder(int pos, string name)
{
	// check if player lands on ladder, display message
	if (pos == 1)
	{
		pos = 38;
		cout << "YAY! " << name << " has landed on a ladder at square 1!" << endl << endl;
	}
	else if (pos == 4)
	{
		pos = 14;
		cout << "Sweet! " << name << " has landed on a ladder at square 4!" << endl << endl;
	}
	else if (pos == 9)
	{
		pos = 21;
		cout << "Cool! " << name << " has landed on a ladder at square 9!" << endl << endl;
	}
	else if (pos == 23)
	{
		pos = 44;
		cout << "HOORAY! " << name << " has landed on a ladder at square 23!" << endl << endl;
	}
	else if (pos == 28)
	{
		pos = 84;
		cout << "YAY! " << name << " has landed on a ladder at square 28!" << endl << endl;
	}
	else if (pos == 36)
	{
		pos = 44;
		cout << "Cool! " << name << " has landed on a ladder at square 36!" << endl << endl;
	}
	else if (pos == 51)
	{
		pos = 66;
		cout << "Sweet! " << name << " has landed on a ladder at square 51!" << endl << endl;
	}
	else if (pos == 71)
	{
		pos = 90;
		cout << "HOORAY! " << name << " has landed on a ladder at square 71!" << endl << endl;
	}
	else if (pos == 80)
	{
		pos = 100;
		cout << "YEEEHAR! " << name << " has landed on a ladder at square 80!" << endl << endl;
	}
	else
	{

	}

	// display position
	cout << name << " is now at square " << pos << "." << endl;

	return pos;
}

void ShowWinner(int pos1, int pos2, int pos3, int pos4, string name1, string name2, string name3, string name4)
{
	// check which player has won, display winner
	if (p1.position >= 100)
	{
		cout << "YAAAAAY! " << p1.name << " is the winner! Congratulations!" << endl;
		cout << "Thanks for playing!" << endl << endl;
	}
	
	if (p2.position >= 100)
	{
		cout << "YAAAAAY! " << p2.name << " is the winner! Congratulations!" << endl;
		cout << "Thanks for playing!" << endl << endl;
	}

	if (p3.position >= 100)
	{
		cout << "YAAAAAY! " << p3.name << " is the winner! Congratulations!" << endl;
		cout << "Thanks for playing!" << endl << endl;
	}

	if (p4.position >= 100)
	{
		cout << "YAAAAAY! " << p4.name << " is the winner! Congratulations!" << endl;
		cout << "Thanks for playing!" << endl << endl;
	}
}
int main()
{
	// choice variables
	char rules;
	char play;

	// intro, ask to see rules
	cout << "Welcome to Chutes and Ladders!" << endl;
	cout << "This game supports 2, 3, or 4 players." << endl << endl;
	cout << "Would you like to see the rules?(y/n): ";
	cin >> rules;

	// input validation
	while ((rules != 'y') && (rules != 'n'))
	{
		cout << endl << "Error: Invalid choice" << endl << endl;
		cout << "Would you like to see the rules?(y/n): ";
		cin >> rules;
	}

	// check if player wants to see rules
	cout << endl;
	ShowRules(rules);

	// ask to play
	cout << "Would you like to play?(y/n): ";
	cin >> play;

	// input validation
	while ((play != 'y') && (play != 'n'))
	{
		cout << endl << "Error: Invalid choice." << endl << endl;
		cout << "Would you like to play?(y/n): ";
		cin >> play;
	}

	// play game
	 if (play == 'y')
	{
		cout << endl << "Let's play!" << endl << endl;

		// get number of players
		int numPlayers = 0;
		cout << "Enter the number of players: ";
		cin >> numPlayers;
		cout << endl;

		// input validation
			while ((numPlayers < 2) || (numPlayers > 4))
		{
			cout << endl << "Error: Invalid number of players." << endl << endl;
			cout << "Enter the number of players: ";
			cin >> numPlayers;
		}


		// get player names
		EnterNames(numPlayers);

		// first pass at player 1 turn
		cout << "- " << p1.name << "'s turn: " << endl << endl;
		cout << p1.name << " is at square " << p1.position << "." << endl << endl;
		cout << "Press enter to roll the die." << endl;
		getchar();
		getchar();
		// roll die, check if landed on chute or ladder
		p1.position = p1.Roll(p1.position, p1.name);
		p1.position = p1.Chute(p1.position, p1.name);
		p1.position = p1.Ladder(p1.position, p1.name);
		cout << endl;

		// first pass at player 2 turn
		cout << "- " << p2.name << "'s turn: " << endl << endl;
		cout << p2.name << " is at square " << p2.position << "." << endl << endl;
		cout << "Press enter to roll the die." << endl;
		getchar();
		// roll die, check if landed on chute or ladder
		p2.position = p2.Roll(p2.position, p2.name);
		p2.position = p2.Chute(p2.position, p2.name);
		p2.position = p2.Ladder(p2.position, p2.name);
		cout << endl;

		// if there is a 3rd player, first pass at player 3 turn
		if (numPlayers == 3)
		{
			cout << "- " << p3.name << "'s turn: " << endl << endl;
			cout << p3.name << " is at square " << p3.position << "." << endl << endl;
			cout << "Press enter to roll the die." << endl;
			getchar();
			// roll die, check if landed on chute or ladder
			p3.position = p3.Roll(p3.position, p3.name);
			p3.position = p3.Chute(p3.position, p3.name);
			p3.position = p3.Ladder(p3.position, p3.name);
			cout << endl;
		}
		// if there is a 4th player, first pass at player 4 turn
		else if (numPlayers == 4)
		{
			cout << "- " << p4.name << "'s turn: " << endl << endl;
			cout << p4.name << " is at square " << p4.position << "." << endl << endl;
			cout << "Press enter to roll the die." << endl;
			cout << endl;
			// roll die, check if landed on chute or ladder
			p4.position = p4.Roll(p4.position, p4.name);
			p4.position = p4.Chute(p4.position, p4.name);
			p4.position = p4.Ladder(p4.position, p4.name);
			cout << endl;
		}
		else
		{

		}

		// loop game while no scores are at least 100
		while ((p1.position < 100) && (p2.position < 100) && (p3.position < 100) && (p4.position < 100))
		{
			// player 1 turn
			cout << "- " << p1.name << "'s turn: " << endl << endl;
			cout << p1.name << " is at square " << p1.position << "." << endl << endl;
			cout << "Press enter to roll the die." << endl;
			getchar();
			// roll die, check if landed on chute or ladder
			p1.position = p1.Roll(p1.position, p1.name);
			p1.position = p1.Chute(p1.position, p1.name);
			p1.position = p1.Ladder(p1.position, p1.name);
			cout << endl;

			// check if winner
			if (p1.position >= 100)
			{
				break;
			}
			
			// player 2 turn
			cout << "- " << p2.name << "'s turn: " << endl << endl;
			cout << p2.name << " is at square " << p2.position << "." << endl << endl;
			cout << "Press enter to roll the die." << endl;
			getchar();
			// roll die, check if landed on chute or ladder
			p2.position = p2.Roll(p2.position, p2.name);
			p2.position = p2.Chute(p2.position, p2.name);
			p2.position = p2.Ladder(p2.position, p2.name);
			cout << endl;

			// check if winner
			if (p2.position >= 100)
			{
				break;
			}

			// if there is a 3rd player, player 3 turn
			if (numPlayers == 3)
			{
				cout << "- " << p3.name << "'s turn: " << endl << endl;
				cout << p3.name << " is at square " << p3.position << "." << endl << endl;
				cout << "Press enter to roll the die." << endl;
				getchar();
				// roll die, check if landed on chute or ladder
				p3.position = p3.Roll(p3.position, p3.name);
				p3.position = p3.Chute(p3.position, p3.name);
				p3.position = p3.Ladder(p3.position, p3.name);
				cout << endl;

				// check if winner
				if (p3.position >= 100)
				{
					break;
				}
			}
			// if there is a 4th player, player 4 turn
			else if (numPlayers == 4)
			{
				cout << "- " << p4.name << "'s turn: " << endl << endl;
				cout << p4.name << " is at square " << p4.position << "." << endl << endl;
				cout << "Press enter to roll the die." << endl;
				cout << endl;
				// roll die, check if landed on chute or ladder
				p4.position = p4.Roll(p4.position, p4.name);
				p4.position = p4.Chute(p4.position, p4.name);
				p4.position = p4.Ladder(p4.position, p4.name);
				cout << endl;

				// check if winner
				if (p4.position >= 100)
				{
					break;
				}
			}
			else
			{

			}
		}

		// display winner
		ShowWinner(p1.position, p2.position, p3.position, p4.position, p1.name, p2.name, p3.name, p4.name);

	}
	// if not wanting to play, display message
	else if (play == 'n')
	{
		cout << endl << "Goodbye!" << endl;
	}
	
	return 0;
}