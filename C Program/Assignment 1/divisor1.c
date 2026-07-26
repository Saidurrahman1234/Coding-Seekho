void main(){
	int a,i,b;
	printf("enter a number:");
	scanf("%d",&a);
	printf("Divisor:");
	for(i=1;i<=a;i++){
		if(a%i==0){
		printf("\t%d",i);
		}
	}
	getch();
}
