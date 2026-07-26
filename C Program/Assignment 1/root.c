
void main(){
	int i,a,b;
	printf(" enter a number:");
	scanf("%d",&a);
	for(i=1;i<=a;i++){
	 	b=i*i;
		if(a==b){
			printf("%d is a Perfect sqaure. Root=%d",a,i);
			break;
	}
}
	if(a!=b){
		printf("%d is Not a Perfect sqaure  ",a );
	}
	getch();
}
