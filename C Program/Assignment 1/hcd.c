void main(){
	int a,b,i,GCD,LCM;
	printf("Enter a two number:");
	scanf("%d%d",&a,&b);
	for(i=1;i<=a;i++){
		if(a%i==0&&b%i==0){
			GCD=i;
		}
	}
	printf("\nGCD=%d",GCD);
	printf("\n");
	LCM=(a*b)/GCD;
	printf("LCM=%d",LCM);
	
	getch();
}
