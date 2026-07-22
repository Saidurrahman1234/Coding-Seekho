void main(){
	int choice;
	while(1){
	printf("\nChosse a Day of the Weeks:");
	scanf("%d",&choice);
	switch(choice){
		case 1:
		    printf("Monday");
		    break;
		case 2:
		    printf("Tuesday");
			break;
		case 3:
			printf("Wednesday");
			break;
		case 4:
			printf("Thusday");
			break;
		case 5:	
			printf("Friday");
			break;
        case 6:
        	printf("Saturday");
		    break;
		case 7:
			printf("Sunday");
			break;    
		default:
		printf("invalid day no.");	
		}
	}
	getch();
}
