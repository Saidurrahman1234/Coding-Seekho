void main(){
	int a,b,s=0;
	printf("Enter a Number :");
	scanf("%d",&a);
	while(a!=0){
		b=a%10;
		s=s*10+b;
		a=a/10;
	}
	printf("Reverse = %d",s);
	
	
getch();
}
