void main(){
	int a,b=0,i;
	printf("enter a n number:");
	scanf("%d",&a);
	/*for(i=1;i<a;i++){
		b=b+(a/pow(5,i));
	}
	printf("Trailing zeros in %d!=%d",a,b);
	*/
while(a>=5){
	a/=5;
	b+=a;
}
printf("Trailing zeros in %d!=%d",a,b);
	getch();
}
