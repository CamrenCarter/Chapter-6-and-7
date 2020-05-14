//Random Number generator
//Author: Camren Carter

#include<iostream>
#include<string>
#include<cstdlib>

int main() {
	int user;

	int randTen = rand() % 10 + 1;


	std::cout << "The random number is " << randTen;

	system("Pause");
	return 0;


}