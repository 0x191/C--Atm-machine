#include <iostream>
#include <string>

struct Atm {
	int atmNum;
	int deposit;
	int withdraw;
	int choice;
	int greetings;
	int checkAtm;
}user1;

void withdraw(Atm userEntity);
void deposit(Atm userEntity);
int createAtmNum(Atm userEntity);

void printInformation(Atm userEntity) {
	std::cout << "Welcome to atm\n" << std::endl;
	std::cout << "1. Enter in atm number" << std::endl;
	std::cout << "2. Don't have one? Create one!" << std::endl;
	std::cin >> userEntity.greetings;

	if (userEntity.greetings == 1) {
		std::cout << "Atm Num: ";
		std::cin >> userEntity.checkAtm;
		if (userEntity.atmNum != userEntity.checkAtm) {
			std::cout << "You entered: " << userEntity.checkAtm << "\nComputer has: " << userEntity.atmNum << std::endl;
			std::cout << "\nLooks like you dont have an Atm Num, create one!" << std::endl;
			std::cout << "\n" << createAtmNum(userEntity); 
		}
	}

	if (userEntity.greetings == 2) {
		std::cout << createAtmNum(userEntity);
	}

	if (userEntity.atmNum > 0) {
		std::cout << "1. Withdraw" << std::endl;
		std::cout << "2.Deposit" << std::endl;
		std::cin >> userEntity.choice;

		if (userEntity.choice == 1) {
			withdraw(userEntity);
		}
		else if (userEntity.choice == 2) {
			deposit(userEntity);
		}
		else {
			std::cout << "error" << std::endl;
		}
	}
}

void withdraw(Atm userEntity) {
	// logging in
	std::cout << "Enter in your atm number" << std::endl;
	std::cin >> userEntity.checkAtm;
	if (userEntity.checkAtm == userEntity.atmNum) {
		std::cout << "Ammount to withdraw: " << std::endl;
		std::cin >> userEntity.withdraw;
		std::cout << "\n $" << userEntity.withdraw << " has been withdrawed!" << std::endl;
		if (userEntity.withdraw > 0) {
			std::cout << "Sucess!" << std::endl;
		}
		else {
			std::cout << "Um.. You cannot withdraw $0" << std::endl;
		}
	}
	else {
		std::cout << "Invalid Atm Number" << std::endl;
	}
}

void deposit(Atm userEntity) {
	std::cout << "Enter in your atm number" << std::endl;
	std::cin >> userEntity.checkAtm;
	if (userEntity.checkAtm == userEntity.atmNum) {
		std::cout << "Ammount to deposit: " << std::endl;
		std::cin >> userEntity.deposit;
		std::cout << "\n $" << userEntity.deposit << " has been deposited!" << std::endl;
		if (userEntity.deposit > 0) {
			std::cout << "Success!" << std::endl;
		}
		else {
			std::cout << "Um.. You cannot deposit $0" << std::endl;
		}
	}
	else {
		std::cout << "Invalid Atm Number" << std::endl;
	}
}

int createAtmNum(Atm userEntity) {

	std::string fname;
	std::cout << "\nFirst name: " << std::endl;
	std::cin >> fname;
	std::cout << "Account Number: ";
	std::cin >> userEntity.atmNum;
	std::cout << "Sucess!" << std::endl;
	std::cout << "\n" << std::endl;
	printInformation(userEntity);

	return 0;
}

int main() {

	printInformation(user1);
	system("Pause");
}
