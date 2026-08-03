void main(){
	int i,j,n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(j==0||j==n-1||i==0||i==n-1){
			printf("*");
		}
		else{
			printf(" ");
		}
	}
		printf("\n");
	}
	getch();
}
