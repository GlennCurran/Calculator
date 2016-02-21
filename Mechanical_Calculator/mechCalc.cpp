#include <iostream>


using namespace std;



char str[1024];
char charList[] = {
  '!',
  '"',
  '£',
  '$',
  '%',
  '^',
  '&',
  '*',
  '(',
   ')',
   '-',
   '_',
   '+',
   '=',
   '`',
   '¬',
   '¬',
// all non numeric chars need to be added here
};






char opList[] = {
 '+',
 '-',
 '/',
 '*',
};
int x = 0;
int i;
bool correctFlag = false;
int counter;






int main () {

cout << "Enter a number to begin" <<endl;


  while (str[x] != '=') {

    while (correctFlag == false) {
     cin >> str[x];
     i = 0;
     while (i < 17) {

           if (str[x] == charList[i]) {

               correctFlag = false;
               i = 17;


           } else {

               correctFlag = true;

           };

           i++;

         };

         if (correctFlag = false) {

           cout << "Please enter a valid number" << endl;

         };
      };

      x++;
      counter++;

      correctFlag = false;

      i = 0;

      while (correctFlag == false) {
     cin >> str[x];
     while (i < 17) {

           if (str[x] =! opList[i]) {

               correctFlag = false;
               i = 17;


           } else {

               correctFlag = true;


           };

           i++;

         };

         if (correctFlag = false) {

           cout << "Please enter a valid number" << endl;

         };
      };

  };

for (i = 0; i < counter; i++) {



};



  };




