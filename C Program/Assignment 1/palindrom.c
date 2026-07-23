void main(){
	int a,b,d,s=0;
	printf("enter a number:");
	scanf("%d",&a);
	d=a;
	while(a!=0){
		b=a%10;
		s=(s*10)+b;
		a=a/10;
	}
	if(d==s){
		printf("%d is a Palindrom",d);
	}
	else{
		printf("%d is Not a Palindrom",d);
	}
	getch();
}
