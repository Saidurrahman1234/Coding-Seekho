void main(){
	int i,j,a,b,count=1;
	printf("enter N number:");
	scanf("%d",&a);
	for(i=2;i<=a;i++){
		for(j=2;j<=i;j++){
			if(i!=j && i%j==0){
				break;
			}
			else if(i==j){
				printf("\t%d",i);
			}
		}
		}

	getch();
}
