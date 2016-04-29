#include <iostream>
using namespace std;


int main()
{
	char op;
    float a, b;

	cout << "***Hello, this is a simple calculator***\n\n";

	cout << "Enter an operator  ";
    cin >> op;
    cout << "Enter two numbers  ";
    cin >> a >> b;

	switch(op){
	case '+':
	    cout << a+b;
        break;

    case '-':
    	cout << a-b;
    	break;

    case '*':
    	cout << a*b;
    	break;

    case '/':
    	cout << a/b;
    	break;
            
    default:
        cout << "Error operator is not correct!!";
            break;
	}
    return 0;
}