#include <iostream>
#include <cmath>

using namespace std;

int op, value1, value2, ans;

int main() {

	cout << "Calculator\nBy Samuel Chomicz & Max Elderfield\n\n";

	while(true) {
        
		cout << "Calculator\n\n";
		cout << "1. Add\n" <<
				"2. Subtract\n" <<
				"3. Divide\n" <<
				"4. Multiply\n" <<
				"5. Square\n" <<
				"6. Square root\n" <<
				"7. To the power of\n" <<
				"8. Exit\n\n" <<
				"What would you like to do?\n" <<
                "Please type a number and press enter. ";
        

		cin >> op;

		if(op == 8)
			break;

		if(op == 5) {
				cout << "\nPlease enter a value: ";
				cin >> value1;

		}else if(op == 6) {
				cout << "\nPlease enter a value: ";
				cin >> value1;
		}else{
			cout << "\nPlease enter the first value: ";
			cin >> value1;
			cout << "Please enter the second value: ";
			cin >> value2;
        }
        
		if(op == 1)
			ans = value1 + value2;
		else if(op == 2)
			ans = value1 - value2;
		else if(op == 3)
			ans = value1 / value2;
		else if(op == 4)
			ans = value1 * value2;
		else if(op == 5)
			ans = value1 * value1;
		else if(op == 6)
			ans =  sqrt(value1);
        else if(op == 7)
			ans = pow(value1, value2);

		cout << "\nThe result is: " << ans << "\n\n";
	}

	cout << "\n\nBye bye!\n";

}