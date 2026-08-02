void main(){
	int i,arr[100],c[100];
	printf("Enter a element:");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	printf("Copied Array:");
	for(i=0;i<5;i++){
		c[i]=arr[i];
		printf("%d\t",c[i]);
	}

	getch();
}
