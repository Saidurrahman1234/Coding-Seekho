void main(){
	int i,j,n,s;
	printf("enter a value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(j==1||j==n||i==1||i==n)
			printf("%d",i);
			else
			printf(" ");
		}
		printf("\n");
	}
	getch();
}
