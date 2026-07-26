void main(){
	int n,i;
	float s=0;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		s=s+(1.0/i);
	}
	printf("Sum=%f",s);
	
	getch();
}
