//GuessGame
//Author: Camren Carter

#include<iostream>
#include<string>
#include<stdlib.h>
#include <stdio.h>   
#include <stdlib.h>     
#include <time.h>  

int main() {
	srand(time(NULL));
	std::string play;
	int guess;
	int end = 0;
	int countdown = 5;
	int numM, numE, numH;
	std::string select;
	numE = rand() % 10 + 1;
	numM = rand() % 100 + 1;
	numH = rand() % 1000 + 1;
	std::string more;

	std::cout << "Guess the number to win!\n" << "You have 5 chances to guess the number\n Do you wish to play: Yes/No\n";
	std::cin >> play;
	if (play == "yes" || play == "Yes") {
		std::cout << "What difficulty do you wish to play: easy/medium/hard";
		std::cin >> select;
		if (select == "easy") {
			std::cout << "You chose easy. Guess the number between 1 and 10";
			for (int i = 5; i > 0; i--) {
				std::cout << "Guess #" << i << std::endl;
				std::cin >> guess;
				if (guess == numE) {
					std::cout << "Congratulations You Have Won!!!";
					break;
				}
				else if (guess > numE) {
					std::cout << "Too High\n";
				}
				else if (guess < numE) {
					std::cout << "Too Low\n";
				}
			}
		}
		else if (select == "medium") {
			std::cout << "You chose easy. Guess the number between 1 and 100";
			for (int i = 5; i > 0; i--) {
				std::cout << "Guess #" << i << std::endl;
				std::cin >> guess;
				if (guess == numM) {
					std::cout << "Congratulations You Have Won!!!";
					break;
				}
				else if (guess > numM) {
					std::cout << "Too High\n";
				}
				else if (guess < numM) {
					std::cout << "Too Low\n";
				}
			}
		}
		else if (select == "hard") {
			std::cout << "You chose easy. Guess the number between 1 and 1000";
			for (int i = 5; i > 0; i--) {
				std::cout << "Guess #" << i << std::endl;
				std::cin >> guess;
				if (guess == numH) {
					std::cout << "Congratulations You Have Won!!!";
					break;
				}
				else if (guess > numH) {
					std::cout << "Too High\n";
				}
				else if (guess < numH) {
					std::cout << "Too Low\n";
				}
			}
		}
	}
	else if (play == "No" || play == "no") {
		std::cout << "aight I see how it is";
	}
}