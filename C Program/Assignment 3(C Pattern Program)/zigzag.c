void main(){
	int i,j,n;
	printf("enter the column number");
	scanf("%d",&n);
	for(i=0;i<3;i++){
		for(j=0;j<=n;j++){
			if((i+j)%4==0||(i==1&&j%4==1))
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
	getch();
}
