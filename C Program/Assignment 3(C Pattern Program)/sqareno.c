void main(){
	int i,j,n,s;
	printf("enter a value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf(" %d",j*j);
		}
		printf("\n");
	}
	getch();
}
