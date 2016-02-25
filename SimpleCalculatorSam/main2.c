#include <stdio.h>

int main() {

	int n,num1,num2,result; 

	printf("***Simple Calculator***\n\n");
	printf("Please enter a number  \n");
	scanf("%d", &num1);
	printf("What operation do you want to do?\n");
	printf("Press 1 for Addition\n");
	printf("Press 2 for Subtration\n");
	printf("Press 3 for Multiplication\n");
	printf("Press 4 for Division\n");
	scanf("%d", &n);
	printf("Please enter a second number  \n");
	scanf("%d", &num2);
	switch(n)
	{
		case 1:result=num1+num2;
				printf("The result of that addition is %d \n",result);
				break;
		case 2:result=num1-num2;
				printf("The result of that subtraction is %d \n",result);
				break;
		case 3:result=num1*num2;
				printf("The result of that multiplication is %d \n",result);
				break;	
		case 4:result=num1/num2;
				printf("The result of that division is %d \n",result);
				break;	
		default:printf("Wrong input");
	}
	return 0;
}