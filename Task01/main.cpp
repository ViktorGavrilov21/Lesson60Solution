#include <iostream>
#include "logic.h"

using namespace std;

int main() {
	int x = 10, y = 7;

	cout << "Before: x = " << x << ", y = " << y << endl;

	swapping(x, y);

	cout << "After: x = " << x << ", y = " << y << endl;


	return 0;
}