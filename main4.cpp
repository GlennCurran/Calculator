#include <iostream>

using namespace std;

int main() {

 int n,num1,num2,result;
 bool flag = true;

  while (flag == true) {



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
	if ( num1 > 9 or 0 > num1) {
      n = 5;
	};

	if (num2 > 9 or 0 > num2) {
      n = 5;
	};
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
	}
  cout << " " << endl;
  };
};
