void main(){
	int i,j,n;
	char c;
	printf("enter a vlaue of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			c='A'+(j-1);
			printf("%c",c);
		}
		printf("\n");
	}
	getch();
}
