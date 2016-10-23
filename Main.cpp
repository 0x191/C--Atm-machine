#include <iostream>
#include <string>

struct Atm {
	int atmNum;
	int depost;
	int withdraw;
	int choice;
	int checkAtm;
}user1;

void withdraw(Atm userEntity);
void deposit(Atm userEntity);

void printInformation(Atm userEntity) {
	std::cout << "Welcome to atm" << std::endl;
	std::cout << "Enter in atm number" << std::endl;
	std::cin >> userEntity.atmNum;

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
		else{
			std::cout << "error" << std::endl;
		}
	}
	else {
		std::cout << "Error" << std::endl;
	}
}

void withdraw(Atm userEntity) {
	// logging in
	std::cout << "Enter in your atm number" << std::endl;
	std::cin >> userEntity.checkAtm;
	if (userEntity.checkAtm == userEntity.atmNum) {
		std::cout << "Ammount to withdraw: " << std::endl;
		std::cin >> userEntity.withdraw;
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
		std::cin >> userEntity.depost;
		if (userEntity.depost > 0) {
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
int main() {

	printInformation(user1);
	system("Pause");
}
