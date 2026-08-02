void main(){
	int i,arr[100],even=0,odd=0;
	printf("Enter a element:");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++){
		if(arr[i]%2==0){
		even++;
		}
		else{
		odd++;
		}
	}
	printf("Even=%d\t",even);
	printf("Odd=%d",odd);
	getch();
}
