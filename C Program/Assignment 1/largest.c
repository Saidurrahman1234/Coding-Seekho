void main(){
	int a,b,c;
	printf("enter tree number :");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b&&b==c){
		printf("all number are equal");
	}
	else
	if(a>b){
		if(a>c){
			printf("largest=%d",a);
		}
	}
	else if(b>c){
	printf("largest=%d",b);
	}
	else{
		printf("largest=%d",c);
	}
	getch();
}
