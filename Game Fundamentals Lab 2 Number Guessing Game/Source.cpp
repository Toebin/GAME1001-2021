#include <ctime>
#include <iostream> // Console input/output.
#include <string>   // Using strings.
#include <windows.h> // Colour
#include <random>

using namespace std;

int main() // Entry point for every C++ program.
{
	// Declare variables.
	
	bool currentPlayer, quitGame = false;
	int randomNum, guess;
	string player1, player2;
	bool restart = false, quit = false;
	char y, n;
	int answer;

	static std::random_device rd;
	static std::mt19937 gen;
	gen.seed(rd());
	static std::uniform_int_distribution<> dist(1, 100);

	// Create random number from 1 to 100 inclusive.
rerun:
	srand((unsigned)time(NULL)); // Seeds the random number sequence.
	randomNum = 1 + rand() % 100; // Returns 1-100 inclusive

	// Prompt the players for their names.


	system("Color B5");
	system("Color 16");
	system("Color DE");
	cout << "Player 1, please enter your name: ";
	cin >> player1;
	cout << "Welcome " << player1 << "!" << endl;
	cout << "Player 2, please enter your name: ";
	cin >> player2;
	cout << "Welcome " << player2 << "!" << endl;

	// Randomize who goes first. You can also use a Boolean.
	
	currentPlayer = rand() % 2; // Sets currently player to 0 or 1. 

	// Start the game. Main game loop.
	
	while (quitGame == false) // !quitGame or quitGame != true
	{   
		// The ?: below is the conditional operator. It's a mini if/else.
		cout << (currentPlayer == 0 ? player1 : player2) << ", enter your guess: ";
		cin >> guess; // cin is dangerous. We're not accounting for fail.
		
		// Check the guess against three possibilities.
		if (guess < randomNum)
			cout << "Your guess is too low." << endl;
		else if (guess > randomNum)
			cout << "Your guess is too high." << endl;
		else // guess == randomNum
		{
			cout << "Your guess is correct!" << endl;
			quitGame = true;
		}
		if
			(quitGame == false) // Game is still on, switch player.
			currentPlayer = !currentPlayer;
	}
	system("Color 0A");
	cout << (currentPlayer == 0 ? player1 : player2) << " wins!" << endl;

//	cin >> userResponse;

//	if (userResponse == "yes" || userResponse == "Yes") {
//		attempts = 0;
//		hiddenNumber = dist(gen);
//		continue;
	}
//	else if (userResponse == "no" || userResponse == "No") {
//		std::cout << "Goodbye!" << std::endl;
//		break;
//	}
}
//	} while (guess != hiddenNumber);

//	std::cout << "/nPress any key to quit.";
//	std::cin.get();
//


	//while (quitGame)
	//{
	//	cout << "Would you like to play again?" << " Please enter 'y' or 'n'. " << endl;
	//	cin >> answer;
	//} while (answer == 'y')
//
	//system("pause"); // Pause the console before closing. Not portable.
	//return 0;
	
}