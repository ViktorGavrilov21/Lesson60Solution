#include <iostream>
using namespace std;


void change(int* value);

int main() {
	int number = 10;

	cout << "Before: number = " << number << "\n";

	change(&number);

	cout << "After: number = " << number << "\n";


	return 0;
}

void change(int* value) {
	*value *= 2;
}