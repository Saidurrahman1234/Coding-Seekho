void main(){
	int n;
	printf("Enter a numvber between 1 to 10:");
	do{
		scanf("%d",&n);
		printf("Invalid Input!");
		}
	while(n<=0||n>=10);
	printf("valid input");
	
	getch();
}
