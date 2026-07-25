void main(){
	int choice;
	float a,b,c;
	while(1){
	printf("\n1.addition\n2.substraction\n3.multiplication\n4.Exit");
	printf("\nChoice:");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("\nenter two number:");
			scanf("%f%f",&b,&c);
		    a=b+c;
		    printf("Result:%f",a);
		    break;
		case 2:
			printf("\nenter two number:");
			scanf("%f%f",&b,&c);
		    a=b-c;
		    printf("Result:%f",a);
			break;
		case 3:
			printf("\nenter two number:");
	        scanf("%f%f",&b,&c);
			a=c*b;
			printf("Result:%f",a);
			break;
		case 4:
		printf("Goodbye!");
		break;
		default:
		printf("invalid option");	
	}
}
	getch();
}
