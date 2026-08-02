void main(){
	int i,arr[100],largest,Secondlargest;
	printf("Enter a element:");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	largest=arr[0];
	Secondlargest=arr[0];
	i=0;
	while(i<5){
		if(largest<arr[i]){
		Secondlargest = largest;
		largest=arr[i];
		}
		else if(Secondlargest<arr[i]&&arr[i]!=largest){
		Secondlargest=arr[i];
		}
		i++;
	}
	printf("Secondlargest=%d",Secondlargest);
	getch();
}
