void main(){
	int a,count=0;
	printf("Enter a integer:");
	scanf("%d",&a);
	while(a!=0){
		a=a/10;
		count++;
	}
	printf("Digit Count=%d",count);
	getch();
}
