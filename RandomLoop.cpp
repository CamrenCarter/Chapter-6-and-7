//Random Loop
//Author: Camren Carter

#include<iostream>
#include<string>
#include <stdio.h>      
#include <stdlib.h>    
#include <time.h>       


int main() {
	int r;
	srand(time(NULL));
	
	for (int i = 10; i >= 0; i--) {
		r = rand() % 100 + 1;
		std::cout << r << std::endl;
	}

}