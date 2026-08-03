void main(){
	int i,j,n,s=1;
	printf("enter a n value:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
			printf("%d",s);
			s++;
		}
		printf("\n");
	}
	getch();
}
