//Chance Daily
// 2.4 Problem #9

#include <iostream>

int main(){

	int bagels, donuts, coffee;
	double bagelsPrice, donutsPrice, coffeePrice, total;

	bagelsPrice = 0.99;
	donutsPrice = 0.75;
	coffeePrice = 1.20;

	std::cout << "Welcome to Crispies Bagels and Bites!" << std::endl;

	std::cout << "How many bagels would you like? ";
	std::cin >> bagels;

	std::cout << "How many donuts would you like? ";
	std::cin >> donuts;

	std::cout << "How many cups of coffee would you like? ";
	std::cin >> coffee;

	total = (bagels * bagelsPrice) + (donuts * donutsPrice) + (coffee * coffeePrice);

	std::cout << "Your total is " << total << "!" << std::endl;
	std::cout << "Thank you for stopping in!" << std::endl;

}