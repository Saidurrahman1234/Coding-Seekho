void main(){
	int d,n,a,i,s=1,c=0;
	printf("Enter a number:");
	scanf("%d",&n);
	d=n;
	while(n!=0){
		a=n%10;
		s=1;
		for(i=1;i<=a;i++){
			s=s*i;
		}
		c=c+s;
		n=n/10;
	}//printf("%d",c);
	if(c==d)
	printf("%d is a Strong Number",d);
	else{
		printf("%d is Not a Strong Nmuber",d);
	}
	
	getch();
}
