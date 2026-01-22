// Interactive Story.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 1/22/2026

#include <iostream>
using namespace std;
int main()
{	
	cout << "Welcome to the tutorial" << endl;
	string fName, lName, major; 
	cout << "Please enter first name: ";
	cin >> fName; 

	cout << "Please enter last name: ";
	cin >> lName;

	int age;
	cout << "What is your age? ";
	cin >> age;
	

	cout << "What is your major? ";
	cin >> major;

	cout << "Your name is: " << fName << " " << lName << " and you are " << age << "You major in: " << major << endl;

	//The code will not work on the Studio Code, but it will work on other compilers.
}

