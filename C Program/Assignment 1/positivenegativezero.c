void main(){
	int a;
	printf("enter the number:");
	scanf("%d",&a);
	if(a>0){
		printf("it is a positive");
	}
	else if(a<0){
		printf("it is negative");
	}
	else{
		printf("it is zero");
	}
	getch();
}
