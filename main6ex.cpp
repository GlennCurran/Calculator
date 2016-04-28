#include <iostream>
#include "stdlib.h"
#include <string>

using namespace std;
    void restart();
    int result;
    bool isValid;

    int ConvertedNum1;
    int ConvertedNum2;
    int ConvertedN;

    char num1;
    char num2;
    int num1int;
    int num2int;
    char n;
    bool checkNum1, checkNum2;




void incorrect() {

cout << "Wrong Input" << endl;
cout <<"------------------------" << endl;
    cout << " " << endl;
    cout << "Press Enter to continue." << endl;
    cin.get();
    cin.get();
    system("cls");
    restart();
};

void restart()  {


   bool flag = true;

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

	//if (num1.length() >= 2) {
//ConvertedNum1 = (int)num1 - 48;
        //incorrect();
	//}

    cout <<"------------------------------------" <<endl;
	cout <<"Choose Operation (+ - * /)" << endl;
    cout <<"------------------------------------" << endl;
    cout << num1 << endl;
	cin >> n;
	system("cls");

//if ( n != '+'  ||  n != '-' || n   !=  '/'  || n  != '*') {
    // incorrect();
//};

ConvertedN = (int)n;


switch (ConvertedN) {

  case 43: isValid = true; // checks to see if the ASCII value of "n" is 43, 45, ,42, 47
     break;
  case 45: isValid = true;
     break;
  case 42: isValid = true;
     break;
  case 47: isValid = true;
    break;
  default:
      incorrect();

 break;
}


	cout <<"------------------------------------" << endl;
	cout <<"Enter Second Number (0-9)" << endl;
    cout <<"------------------------------------" << endl;
    cout << num1 << " " << n << endl;
    cin >> num2;
	system("cls");

	//if (num2.length() >= 2) {

        // incorrect();

	//}
	//int num1_length = num1.length();
	//int num2_length = num2.length();


	//int ConvertedNum1 = std::stoi (num1,nullptr,num1_length);
	//int ConvertedNum2 = std::stoi (num2,nullptr,num1_length);


    ConvertedNum1 = (int)num1 - 48;
    ConvertedNum2 = (int)num2 - 48;


    cout <<"Result of Calculation" << endl;
    cout <<"------------------------------------" << endl;

	switch(ConvertedN) {

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




}


int main() {

restart();



};
