// WISH U LUCK : )

#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");

	srand(time(NULL));
	// random number ( 1 - 5 )
	int rand_num = 1 + rand() % 5;
	string sure_replay;
	// user number choose
	int user_num;
	// user tries
	int tries = 4;
	// if stop = true the game will end ( win ), false = game will start again since tries not out
	bool stop = false;

	// Cycle
	do {
		cout << "\nEnter your number(1 - 5): ";
		// user input number
		cin >> user_num;
		// if user pick some wrong number, then code will start
		if (user_num != rand_num) {
			cout << "Wrong number.\n";
			// if user pick some wrong number, tries gone -1
			tries--;
			cout << "Tries: " << tries;
			// if tries out, then game end
			if (tries == 0) {
				cout << "\nTries out. \nYou lose!\n";
				cout << "Do you wanna replay?\n-> ";
				cin >> sure_replay;
				if (sure_replay == "yes") {
					main();
				}
				else if (sure_replay == "no") {
					return 0;
				}
			}
			
		}
		// if user pick guess number, stop = true, also we have while(!true) that mean if stop = true next code will start
		else stop = true;
	} while (!stop);
	cout << "You win!";
	// enjoy ( ig )
}
