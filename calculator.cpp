#include<stdio.h>
int main()
{
	int number1,number2;
	float result;
	char ch;
	printf("enter the 1 st number=");
	scanf("%d",&number1);
	printf("enter the 2 nd number=");
	scanf("%d",&number2);
	
	printf("choose operation to perform(+,-,*,/,%)");
	scanf(" %c",&ch);
	
	switch(ch)
	{
		case '+':
			result=number1+number2;
			break;
		case '-':
			result=number1-number2;
			break;
		case '*':
			result=number1*number2;
			break;
		case '/':
			result=(float)number1/(float)number2;
			break;
		case '%':
			result=number1%number2;
			break;
		default:
			printf("Invalid operation.\n");
				
	}
	printf("The result is: %d %c %d= %f\n",number1,ch,number2,result);
	return 0;
}
