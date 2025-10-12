#include<stdio.h>
int main ()
{
	int num1,num2,result;
	char op;
	printf(" ENTER THE FIRST NUMBER : ");
	scanf ("%d",&num1);
	printf(" ENTER THE SECOND NUMBER : ");
	scanf ("%d",&num2);
	printf("ENTER THE MATHEMATICAL OPERATION TO BE PERFORMED : ");
	scanf(" %c", &op);
	
	switch (op) {
		case '+':
		result=num1+num2;
		printf("SUM : %d",result);
		break;
		
		case '-':
		result=num1-num2;
		printf("DIFFERENCE : %d",result);
		break;
		
		case '*':
		result=num1*num2;
		printf("PRODUCT : %d",result);
		break;
		
		case '/':
		result=num1/num2;
		printf("QUOTIENT : %d",result);
		break;
		
		case '%':
			if(num2==0) {
				printf("DONOT ENTER ZERO ");
			}
		result=num1%num2;
		printf("\n Result : %d",result);
		break;
		
		default:
		 printf("INVALID!!");
		break;
	}
	
	
	
}