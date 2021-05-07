#include <iostream>
#include <windows.h>
using namespace std;




//VARIBLES
int pscore = 0;
int cscore = 0;
int option;
bool win = 0;
bool tie = 0;
bool loose = 0;


//MAIN CODE
int main() {
	int oppon = rand() % 4;
	system("CLS");
	cout << "player: " << pscore << "\n";
	cout << "computer: " << cscore << "\n";
	cout << "1: rock\n";
	cout << "2: paper\n";
	cout << "3: scissors\n";
	cout << "option: ";
	cin >> option;
	if (option == 1) {
		if (oppon == 1) {
			cout << "rock\n";
			win = 0;
			tie = 1;
			loose = 0;
		}
		else if (oppon == 2) {
			cout << "paper\n";
			win = 0;
			tie = 0;
			loose = 1;
		}
		else if (oppon == 3) {
			cout << "scissors\n";
			win = 1;
			tie = 0;
			loose = 0;
		}
	}
	else if (option == 2) {
		if (oppon == 1) {
			cout << "rock\n";
			win = 1;
			tie = 0;
			loose = 0;
		}
		else if (oppon == 2) {
			cout << "paper\n";
			win = 0;
			tie = 1;
			loose = 0;
		}
		else if (oppon == 3) {
			cout << "scissors\n";
			win = 0;
			tie = 0;
			loose = 1;

		}
	}
	else if (option == 3) {
		if (oppon == 1) {
			cout << "rock\n";
			win = 0;
			tie = 0;
			loose = 1;
		}
		else if (oppon == 2) {
			cout << "paper\n";
			win = 1;
			tie = 0;
			loose = 0;
		}
		else if (oppon == 3) {
			cout << "scissors\n";
			win = 0;
			tie = 1;
			loose = 0;

		}
	}
	if (win == 1) {
		for (int i = 0; i <= 4; ++i) {
			system("CLS");
			cout << "WIN\n";
			int reset = 5 - i;
			cout << "resetting: " << reset;
			Sleep(1000);
		}
		++pscore;
	}

	else if (tie == 1) {
		for (int i = 0; i <= 4; ++i) {
			system("CLS");
			cout << "TIE\n";
			int reset = 5 - i;
			cout << "resetting: " << reset;
			Sleep(1000);
		}

	}
	else if (loose == 1) {
		for (int i = 0; i <= 4; ++i) {
			system("CLS");
			cout << "LOOSE\n";
			int newgame = 5 - i;
			cout << "new game: " << newgame;
			Sleep(1000);
		}
		++cscore;
	}
	return main();

}