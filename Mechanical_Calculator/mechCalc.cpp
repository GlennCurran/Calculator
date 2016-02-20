#include <iostream>


using namespace std;



char str[1024];
char charList[17] = {

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
// all non numeric chars neen to be added here
};

char oplist[] = {




};
int x;
int i;
bool correctFlag;
int counter;






int main () {

cout << "Enter a number to begin" <<endl;


  while (str[x] != '=') {

    while (correctFlag == false) {
     cin >> str[x];
     for (i = 0; i < 17; i++){
           if (str[x] == charList[i]) {

               correctFlag = false;


           } else {

               correctFlag = true;



           };

         };

         if (correctFlag = false) {

           cout << "Please enter a valid number" << endl;

         };
      };

      x++;
      counter++;

      correctFlag = false;

      while (correctFlag == false) {
     cin >> str[x];
     for (i = 0; i < 17; i++){
           if (str[x] =! opList[i]) {

               correctFlag = false;


           } else {

               correctFlag = true;


           };

         };

         if (correctFlag = false) {

           cout << "Please enter a valid number" << endl;

         };
      };

  };

for (i = 0; i < counter; i++) {


};



  };






