void main(){
	int i,j,n,s=1;
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		s=1;
		for(j=1;j<=i;j++){
			if((j+i)%2==0){
			printf("* ");
			}
			else{
			printf("%d ",s);
			s++;
		}
		}
		printf("\n");
	}
	getch();
}
