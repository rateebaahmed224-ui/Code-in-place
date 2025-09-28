#include<stdio.h>
int main()
{
	int a,b,c,x;
	printf("Enter: \n\n 1 to withdraw \n 2 to deposit \n 3 to checkbalance \n  4 to exit ");
	scanf("%d", &a);
	c=1000;
	switch(a){
	
		case 1:
			printf("Enter amount to withdraw");
			scanf ("%d",&b);
			b=c-b;
			printf("Remaining balance : %d",b);
			break;
			case 2:
			printf("Enter the amount to deposit : ");
			scanf("%d",&b);
			b=c+b;
			printf("Your total amount is : %d ",b);
			break;
			case 3:
				printf("Your total balance is : %d",c);
				break;
				case 4 : 
				printf("Exited");
				break;
				default : printf("Invalid");
				
	}
}