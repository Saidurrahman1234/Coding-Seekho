void main(){
	int i,arr[100],search=0,s=0;
	printf("Enter a element:");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	printf("Search=");
	scanf("%d",&search);
	for(i=0;i<5;i++){
		if(search==arr[i]){
			printf("Found at positon:%d\n",i);
			s=1;
		}
	}
	if(s==0){
		printf("Not Found");
	}
	getch();
}
