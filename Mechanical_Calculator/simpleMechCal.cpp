#include <iostream>

using namespace std;



char noA;
char noB;
int i;
bool correctFlag = false;
char a;
char opin;
bool looper = true;
char op[] = {
 '+',
 '-',
 '/',
 '*',
};


int main() {

while (looper = true) {
cout << "Enter a number to begin operation" << endl;
while (correctFlag == false ) {


cin >> noA;

i = 0;
    while (i < 17) {

        if (noA == op[i]){


            correctFlag = false;
            i = 17;

                    } else {

            correctFlag = true;

        };

        i++;

      };


      if (correctFlag = false) {
        cout << "please enter a valid number" << endl;
      };


  };




correctFlag = false;

cout << "please enter a valid number" << endl;


i = 0;

while (correctFlag == false ) {

cin >> opin;
    while (i < 4) {

        if (opin =! op[i]){

              correctFlag = false;
              i = 17;

                    } else {

            correctFlag = true;

        };

        i++;

      };

      if (correctFlag = false)  {

        cout << "please enter a valid operator" << endl;

      };



  };

i = 0;
cout << "Enter a number to begin" << endl;
while (correctFlag == false ) {

cin >> noB;

            while (i < 17) {
        if (noB == op[i]){


            correctFlag = false;
            i = 17;

                    } else {

            correctFlag = true;


        };

        i++;

      };


      if (correctFlag = false) {
        cout << "please enter a valid number" << endl;
      };


  };

  switch(opin) {

  case '+':
      cout << noA + noB << endl;
      break;
  case '-':
      cout << noA - noB << endl;
      break;
  case '*':
      cout << noA * noB << endl;
      break;
  case '/':
      cout << noA / noB << endl;
      break;



       };

    };



};

