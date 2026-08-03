void main(){
	int i,j,n,middle;
	printf("Enter the value of n:");
	scanf("%d",&n);
	middle=n/2;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(middle==j||middle==i){
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
