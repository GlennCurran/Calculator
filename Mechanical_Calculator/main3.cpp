#include <iostream>

using namespace std;

int n,num1,num2,result;

void switches();



int main() {



	cout << "***Simple Calculator***" << endl;
	cout << "Please enter a number" << endl;
	cin >> num1;
	cout << "What operation do you want to do" << endl;

	cout << "Press 1 for Addition" << endl;
	cout << "Press 2 for Subtraction" << endl;
	cout << "Press 3 for Multiplication" << endl;
	cout << "Press 4 for Division" << endl;
	cin >> n;
	cout << "Please enter a second number" << endl;
	cin >> num2;

    switches();

	return 0;
};

void switches() {


	switch(n)
	{
		case 1:result=num1+num2;
				cout << "The result of that addition is "<< result << endl;
				break;
		case 2:result=num1-num2;
				cout << "The result of that subtraction is " << result << endl;
				break;
		case 3:result=num1*num2;
				cout << "The result of that multiplication is " << result << endl;
				break;
		case 4:result=num1/num2;
				cout << "The result of that division is " << result << endl;
				break;
		default: cout << "Wrong Input" << endl;


	};
cout << " " << endl;


main();

};
