#include <iostream>

using namespace std;
void addInterest(int* balance);
void messageBasedOnBalance(int* balance, string* message);

int main()
{
	//Initializes the balance and message variables
	int balance;
	string message;

	//Creates pointers based on the variables
	int* pointerBalance = &balance;
	string* pointerMessage = &message;


	cout << "\t\t***Welcome to Your Simple Bank***" << endl << endl;
	
	//User enters in their balance
	cout << "Current Balance: ";
	cin >> balance;
	cout << endl;

	//Functions pass in the pointers
	addInterest(pointerBalance);
	messageBasedOnBalance(pointerBalance, pointerMessage);
	
	cout << "Balance After Interest: " << balance << endl << message << endl;
	return 0;
}

//Adds interest to the balance
void addInterest(int* balance)
{
	cout << "Adding Interest..." << endl;
	//How interest is determined can be changed here
	*balance += *balance / 3;
}

//Outputs a message based on the amount of money in the balance
void messageBasedOnBalance(int* balance, string* message)
{
	if (*balance > 900)
	{
		*message = "Congratulations! You qualify for our latest Big Spenders deal!";
	}

	else
	{
		*message = "Sorry, you don't qualify for any of our deals going on right now";
	}

}