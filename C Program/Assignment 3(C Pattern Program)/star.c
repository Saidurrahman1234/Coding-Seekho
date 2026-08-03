void main(){
	int n,i,j;
	printf("enter value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i-1;j++){
			printf(" ");
		}
		for(j=1;j<=2*(n-i)+1;j++){
			printf("*");
		}
		printf("\n");
	}
	for(i=2;i<=n;i++){
		for(j=n-1;j>=i;j--){
			printf(" ");
		}
		for(j=1;j<=2*(i-1)+1;j++){
			printf("*");
		}
		printf("\n");
	}
	getch();
}
