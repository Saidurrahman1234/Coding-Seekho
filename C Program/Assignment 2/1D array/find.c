void main(){
	int i,arr[100],Find,s=0;
	printf("Enter a element:");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	printf("Find=");
	scanf("%d",&Find);
	for(i=0;i<5;i++){
		if(Find==arr[i]){
			s++;
		}
	}
	printf("%d occure %d time",Find,s);
	getch();
}
