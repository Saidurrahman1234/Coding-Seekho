void main(){
	int i,arr[100],largest;
	printf("Enter a element:");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	largest=arr[0];
	for(i=1;i<5;i++){
	if(largest<arr[i]){
		largest=arr[i];
	}
	}
	printf("largest=%d",largest);
	getch();
}
