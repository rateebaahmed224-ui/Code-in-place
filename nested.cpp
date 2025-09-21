#include<stdio.h>
int main()
  {
	int age,weight;
	printf("Enter age:");
	scanf("%d",&age);
	printf("Enter weight");
	scanf("%d",&weight);
	if(age>=18){
		if (weight>50){
			printf("You can donate the blood");
		}
		else printf("Not eligible(underweight)");
	}
else printf("Not eligible(too young)");
}