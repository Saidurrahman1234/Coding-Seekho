void main(){
	int a,b,c=0,i;
	printf("enter a number:");
	scanf("%d",&a);
	b=a;
	for(i=1;i<a;i++){
		if(a%i==0){
			c=c+i;
		}
	}
	if(b==c){
		printf("%d is Perfect number",b);
	}
	else{
		printf("%d is not perfect number",b);
	}
	
	
	getch();
}
