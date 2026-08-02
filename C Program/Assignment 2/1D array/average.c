void main(){
	int i,arr[100],n,s=0;
	float z;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter a number in array:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		s=s+arr[i];
	}
	z=s*1.00/n;
	printf("Average=%.2f",z);
	getch();
}
