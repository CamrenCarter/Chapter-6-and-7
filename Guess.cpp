//Guess
//Author: Camren Carter

#include<iostream>
#include<string>
#include<cstdlib>

int main() {
	int number = rand() % 100 + 1;
	int user;
	int end = 0;

	std::cout << "Guess the number? (Hint it is between 0 and 100):" << std::endl;
	while (end == 0) {

		std::cin >> user;

		if (user == number) {
			std::cout << "Congrats You Won!!!";
			end++;
		}
		else if (user < number) {
			std::cout << "Too low!\n";
		}
		else if (user > number) {
			std::cout << "Too high!\n";
		}
	}
}