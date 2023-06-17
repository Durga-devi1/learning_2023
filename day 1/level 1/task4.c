#include<stdio.h>
int main()
{
	int a;
	int operand1;
	printf("enter the number\n");
	scanf("%d",&operand1);
	char operator;
	printf("enter the opeartor\n");
	scanf("\n%c",&operator);
	int operand2;
	printf("enter the number2\n");
	scanf("%d",&operand2);
	
	switch(operator)
	{
		case '+':
		{		
		a=operand1+operand2;
		printf(" Result = %d",a);
		break;
		}
		case '-':
		{
			a=operand1-operand2;
				printf("Result = %d",a);
		break;
		}
		case '*':
		{
			a=operand1*operand2;
				printf("Result = %d",a);
		break;
		}
		case '/':
		{		
		a=operand1/operand2;
			printf("Result = %d",a);
		break;
     	}
		
		case '%':
		{		
		a=operand1%operand2;
			printf("Result = %d",a);
		break;
	    }
	    default:
	    printf("no operator specified");
	    
	}
	
	
}
