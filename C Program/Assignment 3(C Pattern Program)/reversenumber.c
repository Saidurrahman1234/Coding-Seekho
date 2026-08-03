void main(){
	int i,j,n;
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=n-i+1;j>=1;j--){
			printf("%d",j);
		}
		printf("\n");
	}
}
