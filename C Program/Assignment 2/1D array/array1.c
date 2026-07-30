void main(){
	int a[100],n,i;
	printf("N=");
	scanf("%d",&n);
	printf(" ");
	for(i=0;i<=n-1;i++){
		scanf("%d",&a[i]);
	}
	printf("Array:");
	for(i=0;i<=n-1;i++){
		printf("%d",a[i]);
	}
	
	getch();
}
