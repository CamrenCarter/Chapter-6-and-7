//Rock Paper Scissors
//Author: Camren Carter

#include <iostream>
#include <stdlib.h>

int main() {

	int computer = rand() % 3 + 1;
	int user = 0;

	std::string rock = "Rock\n";
	std::string pap = "Paper\n";
	std::string scis = "Scissors\n";

	std::cout << "Choose: Rock/Paper/Scissors: ";
	std::cin >> user;

	std::cout << "Player chose: " << user << " And the Compute chose: " << computer;

    if (user == computer) {
        std::cout << "Tie\n";
    }
    else if (user == 1 && computer == 3) {
        std::cout << "You Win!!!\n";
    }
    else if (user == 3 && computer == 2) {
        std::cout << "You Win!!!\n";
    }
    else if (user == 2 && computer == 1) {
        std::cout << "You Win!!!\n";
    }
    else {
        std::cout << "Computer Wins!!!\n";
    }

}