// Hello :D

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>

int main() {

	int userstartinput;
	int usergameinput;

	srand(time(0));
	int machinechoice = rand() % 3 + 1;
		
	std::cout << "___ Rock Paper Scissors! ___ \n\n Type 1 to start or 2 to quit!. \n\n";
	Sleep(500);
	std::cin >> userstartinput;

	if (userstartinput == 1) {
		std::cout << "Press 1 for Rock! \n 2 for Scissors & \n 3 for Paper!";
		std::cin >> usergameinput;
	}
	else if (userstartinput == 2) {
		return -1;
	}
		if (usergameinput == machinechoice) {
		std::cout << "It's a tie.";
		return 0;
		}
			else if (usergameinput == 1 && machinechoice == 3 ||
			usergameinput == 2 && machinechoice == 1 ||
			usergameinput == 3 && machinechoice == 2) {

			std::cout << "You won!";
			return 0;
			}
				else {
				std::cout << "You lost..";
				return 0;
				}
}