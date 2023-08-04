#include <iostream>
using namespace std;

int main() {

	long int n;
	cout << "Enter an integer: ";
	cin >> n;

	while (n)
	{

		cout << n << " ";

		if (n == 1)
			break;

		if (n % 2 == 0)
			n /= 2;
		else n = n * 3 + 1;

	}

	cout << "\n";
}