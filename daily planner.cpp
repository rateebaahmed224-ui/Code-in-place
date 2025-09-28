#include<stdio.h>
int main()
{
	int day;
	char M;
	printf("Enter a number of respective day of the week : \n 1.monday \n 2.tuesday \n 3.wednesday \n 4.thursday \n5.friday\n 6.saturday \n 7.sunday \n ");
	scanf("%d",&day);
	
	switch(day){
		case 1 : case 2: case 3: case 4: case 5:
		
		printf ("Choose M for morning and E for evening\n"  );
		scanf(" %c",&M);
		
		switch(M){
			case 'M':
			case 'm':
			printf("Go to class");
			break;
			case 'E': 
			case 'e':
			printf(" Do homework");
		break;
		default : printf ("INVALID INPUT");	
		}
	break;	
	default : printf ("INVALID INPUT");	
	
	case 6 : case 7 :
		printf ("choose M for morning and E for evening : \n");
		scanf (" %c",&M);
		switch (M){
			case 'M': 
			case 'm':
				printf ("Go do exercise ");
				break;
				case 'E': 
			case 'e':
			printf(" Go to sleep");
		break;
		default : printf ("INVALID INPUT");	
		}
	
	}
		
	}
	
