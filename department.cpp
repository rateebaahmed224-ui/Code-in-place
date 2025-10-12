#include<stdio.h>
int main ()
{
	int dept,year;
	printf("ENTER THE PROGRAM TYPE: \n 1.COMPUTER SCIENCE \n 2.ELECTRICAL ENGINEERING\n");
	scanf("%d",&dept);
	
	switch(dept){
	
	
	case 1:
		printf("YOUR DEPARTMENT IS COMPUTER SCIENCE \n");
		printf("What is your current year ? \n 1.First year \n 2. Second year\n");
		scanf("%d",&year);
		 switch (year){
		 	
		 	case 1 : printf("Your courses are : programming fundamentals \n Applied physics\n ");
		 	break; 
		 	
		 	case 2: printf("Your courses are : advanced programming \n Data structures\n");
		 	break;
		 	
		 	default : printf("invalid");
		 	break;
		 	
		 }
		 break;
		
		
		 
		 case 2 :	printf("YOUR DEPARTMENT IS EE \n");
		printf("What is your current year ? \n 1.First year \n 2. Second year\n");
		scanf("%d",&year);
		
		 switch (year){
		 	
		 	case 1 : printf("Your courses are : Electronics \n Applied physics\n ");
		 	break; 
		 	
		 	case 2: printf("Your courses are : ENGINEERING DRAWING \n Advanced physics \n");
		 	break;
		 default:printf("invalid");
 break;
		 	
		
}
break;



 default : printf("invalid");
 break;
}


return 0;
}