void main(){
	int a,s=0,b;
	printf("enter a integer:");
	scanf("%d",&a);
	while(a!=0){  //s=(a/1000)+((a%1000)/100)+((a%100)/10)+a%10; this is only for 4 digit and less than 4
	 	b=a%10; // extract last element
	 	s=s+b;
	 	a=a/10; //remove last element 
	}
	printf("Sum of all digit=%d",s);
	getch();
}
