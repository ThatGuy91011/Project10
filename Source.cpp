#include <iostream>

using namespace std;

int main()
{
	cout << "\t\tPointer test" << endl;

	int age = 21;
	int* page = &age;

	cout << "The value of 'age' is " << *page << endl;
}