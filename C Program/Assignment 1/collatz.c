void main(){
	int n,b,step=0;
	printf("enter a number:");
	scanf("%d",&n);
	printf("%d",n);
	while(n!=1){
		step++;
		if(n%2==0){
			n=n/2;
		}
		else{
			n=(n*3)+1;
		}
		printf("->%d",n);
	}
	printf("\tStep=%d",step);
	getch();
}
