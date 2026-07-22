void main(){
	int a,b;
	printf("enter the number A:");
	scanf("%d",&a);
	printf("enter the number B:");
	scanf("%d",&b);
	if(a>b){
		printf("A is a grater than B");
	}
	else if(b>a){
		printf("B is a grater than A");
	}
	else{
		printf("both are equal");
	}
	getch();
}
