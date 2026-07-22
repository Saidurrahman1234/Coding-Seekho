void main(){
	int choice;
	float a,b,c;
	while(1){
	printf("\nenter two number:");
	scanf("%f%f",&b,&c);
	printf("\n1.addition\n2.substraction\n3.multiplication\n4.divide");
	printf("\nChosse a operation:");
	scanf("%d",&choice);
	switch(choice){
		case 1:
		    a=b+c;
		    printf("Addition is %f",a);
		    break;
		case 2:
		    a=b-c;
		    printf(" Substraction is %f",a);
			break;
		case 3:
			a=c*b;
			printf("Multiplication is %f",a);
			break;
		case 4:
		if (c>0){
			a=b/c;
			printf(" Divide is %f",a);
		}	
		else{
			printf(" Error: can not divided by zero");
		}
		break;
		default:
		printf("invalid option");	
	}
}
	getch();
}
