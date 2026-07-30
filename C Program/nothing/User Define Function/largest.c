int largest(int a,int b){
	if(a>b){
		return a;
	}
	else if(b>a){
		return b;
	}
	else{
		return a;
	}
	return a,b;
}
void main(){
	int c,d,z;
	printf("enter a two number");
	scanf("%d%d",&c,&d);
	z=largest(c,d);
	printf("%d",z);
	getch();
}
