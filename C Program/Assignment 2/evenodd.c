void checkevenodd(){
	int a;
	printf("Enter a number ");
	scanf("%d",&a);
	if(a%2==0){
		printf("%d is a even",a);
	}
	else{
		printf("%d is odd",a);
	}
}
void main(){
	checkevenodd();
	getch();
}
