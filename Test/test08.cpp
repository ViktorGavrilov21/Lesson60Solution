//C/C++
#include <iostream>
using namespace std;

//pointer(ptr)
int main() {
	int number = 100;
	int* ptr = &number;

	*ptr *= 2;

	cout << "Number = " << number << endl;

	return 0;
}