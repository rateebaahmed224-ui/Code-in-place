#include <stdio.h>
int main()
{
	int num;
	printf("enter a number");
	scanf ("%d",&num);
	(num>0)? printf("positive"):
	(num<0)? printf ("negative"):printf("neutral=zero");
	return 0;
}