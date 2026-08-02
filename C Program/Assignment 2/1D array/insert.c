void main(){
	int i,arr[100],Insert,Postion;
	printf("Enter a element:");
	for(i=0;i<=4;i++){
		scanf("%d",&arr[i]);
	}
	printf("Insert:");
	scanf("%d",&Insert);
	printf("Positon:");
	scanf("%d",&Postion);
	for(i=4;i>=Postion;i--){
		arr[i+1]=arr[i];
		if(i==Postion){
		arr[i]=Insert;
		break;
		}
	}
	for(i=0;i<=5;i++){
		printf("%d\t",arr[i]);
	}	
	
	getch();
}
