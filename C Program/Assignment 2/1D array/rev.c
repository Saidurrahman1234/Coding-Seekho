void main(){
	int i,arr[100];
	printf("Enter a element:");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	printf("Reversed array: ");
    for (i=4;i>=0;i--) {
        printf("%d ", arr[i]);
    }
    getch();
}
