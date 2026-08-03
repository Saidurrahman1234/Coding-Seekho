void main(){
	int i,j,n;
	char c;
	printf("n=");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		c='D';
		for(j=i;j>=1;j--){
			printf("%c",c);
			c--;
		}
		printf("\n");
	}
	
	getch();
}
