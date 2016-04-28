#include <iostream>
#include "stdlib.h"


using namespace std;

int main() {

    char n,num1,num2;

    int result;

    int ConvertedNum1;
    int ConvertedNum2;
    int ConvertedN;

    bool flag = true;
    bool checkNum1, checkNum2;

    char a;

    cout << "Simple Calculator - Windows Version" << endl;
    cout << "------------------------------------" << endl;
    cout<< "Written by Glenn Curran and Daniel Canfield" << endl;
    cout<< "Press Enter to Start" << endl;
    cin.get();
    system("cls");

  while (flag == true) {

    cout <<"Enter First Number (0-9)" << endl;
    cout <<"------------------------------------" << endl;
	cin >> num1;
	system("cls");

    cout << num1 << endl;
    cout <<"------------------------------------" << endl;
	cout <<"Choose Operation (+ - * /)" << endl;
    cout <<"------------------------------------" << endl;
	cin >> n;
	system("cls");

	cout << num1 << " " << n << endl;
	cout <<"------------------------------------" << endl;
	cout <<"Enter Second Number (0-9)" << endl;
    cout <<"------------------------------------" << endl;
    cin >> num2;
	system("cls");

	if ( num1 != '0' or '1' or '2' or '3' or '4' or '5' or '6' or '7' or '8' or '9') {
      checkNum1 = false;
	};

	if (num2 != '0' or '1' or '2' or '3' or '4' or '5' or '6' or '7' or '8' or '9') {
      checkNum2 = false;
	};



    ConvertedNum1 = (int)num1 - 48;
    ConvertedNum2 = (int)num2 - 48;
    ConvertedN = (int)n;

    cout <<"Result of Calculation" << endl;
    cout <<"------------------------------------" << endl;

	switch(ConvertedN)
	{
		case 43:result=ConvertedNum1+ConvertedNum2;
				cout << num1 << " " <<  n << " " << num2 << " = " << result << endl;
				break;
		case 45:result=ConvertedNum1-ConvertedNum2;
				cout << num1 << " " <<  n << " " << num2 << " = " << result << endl;
				break;
		case 42:result=ConvertedNum1*ConvertedNum2;
				cout << num1 << " " <<  n << " " << num2 << " = " << result << endl;
				break;
		case 47:result=ConvertedNum1/ConvertedNum2;
				cout << num1 << " " <<  n << " " << num2 << " = " << result << endl;
				break;
		default:
		    cout << "Wrong Input" << endl;
		    cout <<"------------------------" << endl;
	}

    cout << " " << endl;
    cout << "Press Enter to continue." << endl;
    cin.get();
    cin.get();
    system("cls");
  };
};
