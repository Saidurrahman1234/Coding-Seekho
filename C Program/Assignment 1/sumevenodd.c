void main(){
	int a,i,b,evensum=0,oddsum=0;
	printf("Enter a N number value:");
	scanf("%d",&a);
	printf("%d number:",a);
	for(i=1;i<=a;i++){
		scanf("%d",&b);
		if(b%2==0){
			evensum+=b;
		}
		else{
			oddsum+=b;
		}
	}
	printf("Even sum=%d",evensum);
	printf("\tOdd sum=%d",oddsum);
	
	getch();
	
}
