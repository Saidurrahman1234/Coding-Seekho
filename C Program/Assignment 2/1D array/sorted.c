void main(){
	int i,arr[100],n,sorted=1;
	printf("Enter the size of array");
	scanf("%d",&n);
	printf("enter a Number in array:");
	for(i=0;i<n;i++){
	scanf("%d",&arr[i]);
 	}
 	for(i=0;i<n-1;i++){
 		if(arr[i]>arr[i+1]){
 			sorted=0;
		 }
	 }
	 if(sorted==1){
	 	printf("Array is Sorted");
	 }
	 else{
	 	printf("Array is not sorted");
	 }
	 getch();
}
