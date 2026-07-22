void main(){
	int a;
	printf("enter the number of mark out of 100:");
	scanf("%d",&a);
	if(a>100){
		printf("invalid input");
	}
	else if(a>=90){
		printf("Grade:A+");
	}
	else if(a>=75){
		printf("Grade:A");
	}
	else if(a>=60){
    printf("Grade:B");
	}
	else if(a>=45){
		printf("Grade:C");
	}else{
		printf("Grade:Fail");
	}
	getch();
}
