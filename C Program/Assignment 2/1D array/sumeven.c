void main(){
	int i,arr[100],sum=0;
	printf("Enter a element:");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++){
		if(arr[i]%2==0){
		sum=sum+arr[i];
		}
	}
	printf("Sum of Even=%d",sum);
	getch();
}
