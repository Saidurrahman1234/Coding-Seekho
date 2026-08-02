void main(){
	int i,arr[100],sum=0;
	printf("Enter a element:");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++){
		sum=sum+arr[i];
	}
	printf("Sum=%d",sum);
	getch();
}
