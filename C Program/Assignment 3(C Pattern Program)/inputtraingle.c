void main(){
	int i,j,n;
	char c;
	printf("enter the value of n:");
	scanf("%d",&n);
	printf("enter a charcter:");
	scanf(" %c",&c);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("%c",c);
		}
		printf("\n");
	}
	getch();
}
