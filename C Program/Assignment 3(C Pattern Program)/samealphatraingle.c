void main(){
	int i,j,n;
	char c;
	printf("Enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			c='A'+(i-1);
			printf("%c",c);
		}
		printf("\n");
	}
	getch();
}
