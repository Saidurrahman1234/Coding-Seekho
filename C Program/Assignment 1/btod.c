void main(){
	int a,b,i,d=0,j=0;
	printf("enter a binary number:");
	scanf("%d",&a);
	while(a!=0){
		i=a%10;
		d=d+i*pow(2,j);//(1<<j)
		j++;
		a/=10;
	} 
	printf(" Decimal=%d",d);
	getch();
}
