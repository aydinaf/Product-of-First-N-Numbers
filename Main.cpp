//product of first N numbers
// Aydin Azari Farhad
#include <iostream>
using namespace std;
int main() {
	int n;
	double p{ 1 };
	cout << "enter a positive number: ";
	cin >> n;
	if (n > 0) {//checks if the num is positive.
		cout << "The product of all odd numbers smaller than or equal to " << n << " is: ";
		while (n > 0) {
			if (n % 2 != 0) {//checks if number is odd
				cout << n;//if yes, adds the number to the text.
				if (n > 1) {//prints multiplication sign until n reaches 1
					cout << " X ";
				}
				p *= n;//and also multiplies the number.
			}
			n--;//moves to the next number
		}
		cout << " = " << p << endl; //prints final product.
	}
	else {//if number was 0 or negative, gives an error.
		cout << "EROR! Entered value is not positive. ";
	}
	system("pause");
	return 0;
}
