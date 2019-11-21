#include <iostream>

using namespace std;
void bank(int& balance);
void bankPointer(int* balance);

int main()
{
	/**cout << "\t\tPointer test" << endl;

	int age = 21;
	int* page = &age;

	cout << "The value of 'age' is " << *page << endl;
	**/

	int balance = 300;

	bank(balance);

	cout << "Balance = " << balance;

	bankPointer(&balance);
	
	cout << "Balance = " << balance;
}

void bank(int& balance)
{
	balance = 500;
}

void bankPointer(int* balance)
{
	*balance = 900;
}