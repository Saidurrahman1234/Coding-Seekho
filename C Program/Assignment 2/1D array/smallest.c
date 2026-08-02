void main(){
	int i,arr[100],smallest;
	printf("Enter a element:");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	smallest=arr[0];
	for(i=1;i<5;i++){
	if(smallest>arr[i]){
		smallest=arr[i];
	}
	}
	printf("Smallest=%d",smallest);
	getch();
}
