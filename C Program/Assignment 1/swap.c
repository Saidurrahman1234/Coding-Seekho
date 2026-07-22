void main(){
	int a,b,temp;
	printf("enter the Value of A:");
	scanf("%d",&a);
	printf("enter the value of B:");
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
	printf("after swap:\n");
	printf("a= %d\n",a);
	printf("b= %d\n",b);
	
	
	getch();
}
