void main(){
	int i,arr[100],Insert,Postion;
	printf("Enter a element:");
	for(i=0;i<=4;i++){
		scanf("%d",&arr[i]);
	}
	printf("Delete Positon:");
	scanf("%d",&Postion);
	for(i=Postion;i<=4;i++){
		arr[i]=arr[i+1];
	}
	for(i=0;i<=3;i++){
		printf("%d\t",arr[i]);
	}	
	
	getch();
}
